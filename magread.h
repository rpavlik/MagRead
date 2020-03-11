/*
    This file is part of MagRead.

    MagRead is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MagRead is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MagRead.  If not, see <http://www.gnu.org/licenses/>.
    
    Written by Jeffrey Malone <ieatlint@tehinterweb.com>
    http://blog.tehinterweb.com
*/
#ifndef MAGREAD_H
#define MAGREAD_H

#define QUOTE_(x) #x
#define QUOTE(x) QUOTE_(x)

#include <QAudioInput>
#include <QMetaType>
#include <QtWidgets/QMainWindow>

#ifdef Q_WS_MAEMO_5
#include <QMaemo5InformationBox>
#endif

#include "carddetect.h"
#include "magcard.h"
#include "magdecode.h"

#include "accountcard.h"
#include "aamvacard.h"

#include "settingspage.h"


class MagRead : public QMainWindow {
	Q_OBJECT

	public:
		MagRead( QWidget *parent = 0 );
	
	private:
		MagCard card;
		CardDetect cardDetect;
		QAudioFormat audioFormat;
		QAudioInput *audioInput;
		MagDecode *magDec;
		bool captureAudio;
		bool partialRead;
		bool onMainPage;
		QFont font;

		QSettings *settings;

		void mainPage();
		void creditPage();
		void aamvaPage();
		void miscPage( bool partial = false );

		void captureStart();
		void captureStop();

#ifdef Q_OS_SYMBIAN
		QAction *backSoftKey;
#else
		QWidget *mainWidget;
		QVBoxLayout *mainLayout;
		QPushButton *mainBackBtn;

		QAction *settingsAction;
		QAction *aboutAction;
		QAction *exitAction;
		QAction *showDataAction;
#endif
		void addShowData();
		void removeShowData();

		QMenu *fileMenu;

		enum mboxStatus {
			INFORMATION,
			WARNING,
			CRITICAL
		};

	private slots:
		void cardRead( const MagCard _card );
		void notice( QString msg, int timeout = 500, mboxStatus status = INFORMATION );
		void toggleRead();
		void togglePartialRead( bool _partialRead );
		void aboutDialogue();
		void showData();
		void settingsPage();
		void autoReorient( bool enabled );
};

#endif // MAGREAD_H
