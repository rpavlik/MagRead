MagRead is an application to read magnetic stripe cards.

It was written by Jeffrey Malone as a fun app to demonstrate the mslib
library that decodes the magnetic stripe data itself.
MagRead should be able to read any magnetic stripe that conforms to the
standards defined by the ABA and the IATA.  These two formats are by far the
predominant ones found, and the only exceptions I've personally run across are
hotel keys.


Try <a href="https://github.com/earlvanze/SWipe">this</a> updated version instead, which reads track 1 of the card. Track 2 is the normal track with the card number and expiration date (along with a couple other pieces of information), and track 1 has everything on track 2 plus the cardholder’s name and the CVV (different from what most people consider the CVV on the back of the card).
<a href="http://andybromberg.com/credit-cards/">Read more</a> from Andy Bromberg below.

## Requirements:
 - A hardware audio dongle to read the cards, such as those provided by Square
   for their payment service.
 - A compatible audio jack on the device.  Compatible jacks are ones that have
   a pin-out for audio output and input -- typically headset jacks.  These are
   found on some newer MacBooks and Thinkpads, along with many other devices.
 - Qt 4.6 or later (including Qt Multimedia plugin)

Confirmed to work on:
Mac OS X 10.13.4 on a MacBook Pro Retina Mid 2012 by earlvanze
Linux on a Thinkpad W510
Windows 7 on a Thinkpad W510
Nokia N8 with Symbian S^3
Nokia N900 with Maemo 5 PR 1.3 (For <PR1.3, you must use MagRead 1.1 or older)

For your convenience, the binary for macOS High Sierra is Swipe.app. Just double-click to run it. However, if you want to make sure the code was not modified to save or transmit your credit card information, you should read the source code and build it from source yourself. You might also want to use an expired or defunct card for testing and security purposes. I should also follow my own advice.


## Building from source:

Easiest way to build Qt on Mac is using <a href="https://brew.sh/">Homebrew</a>:
```
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)" && brew install qt
```
Then do the following to make Qt build stuff:
```
echo 'export PATH="/usr/local/opt/qt/bin:$PATH"' >> ~/.bash_profile
export LIBCURL_CFLAGS=-I/usr/local/opt/curl/include
export LIBCURL_LIBS=-L/usr/local/opt/curl/lib
```
Then restart your terminal session.


To build on the terminal, simply run:
```qmake && make```
Then type ```open -a MagRead.app``` or double-click MagRead.app to run it.

You may also open the project file in Qt Creator to build.

For Nokia N900 owners, this application is packaged and found in the
extras-devel repository at:
http://maemo.org/packages/view/magread/
Please vote for it so it can eventually ascend to the extras repo.

For Symbian users, at present you must compile this application yourself.  I'll
work on getting a dev certificate so that I can sign a sis file soon.

For Linux, Windows, and Mac users, binary versions will be available very soon
on Jeffrey's  blog.  The code however can be compiled yourself now, with Linux/Mac instructions above.


Mac users: Binary is available under Releases.


Further information on how this program works and screenshots of it in action
may be found on my blog at:
http://blog.tehinterweb.com/


I forked this and modified it to build with Qt 5.10.1 on MacOS High Sierra.

This works on the S1 model of the Square card reader, which consists of a simple magnetometer connected to the GND and MIC pins of the TRRS connector, with the binary data on the magstripe transmitted as an analog signal with absolutely no encryption. You can get one of these on eBay (it's the thick version with the smooth rounded surface on the back (not the thin flat back). This is the cheapest commodity card reader I know that works.

"Since demonstrating its first Square Reader device, the model S1, at the 2010 SXSW conference [7], Square has released three additional revisions of the device [8][9][10]. The Square Reader was criticized as insecure for lacking point-of-swipe encryption until the later S3 and S4 models [11]. https://www.blackhat.com/docs/us-15/materials/us-15-Mellen-Mobile-Point-Of-Scam-Attacking-The-Square-Reader-wp.pdf

Read more: http://andybromberg.com/credit-cards/
