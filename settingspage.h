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
#ifndef SETTINGSPAGE_H
#define SETTINGSPAGE_H

#include <QtWidgets/QScrollArea>

class QCheckBox;
class QCheckBox;
class QComboBox;
class QGroupBox;
class QLabel;
class QPushButton;
class QRadioButton;
class QSettings;
class QSlider;
class QVBoxLayout;

class SettingsPage : public QScrollArea {
	Q_OBJECT
	public:
		explicit SettingsPage();

	private:
		QSettings *settings;

		QWidget *widget;
		QVBoxLayout *layout;
		QPushButton *resetButton;

		/* General Settings */
		void makeGeneralBox();
		QGroupBox *generalBox;
		QVBoxLayout *generalLayout;
		QCheckBox *formatCredit;
		QCheckBox *formatAAMVA;
		QCheckBox *autoReorient;
		QLabel *timeOutLabel;
		QSlider *timeOutSlider;
		QLabel *decodeMethodLabel;
		QRadioButton *decodeMethodIntersect;
		QRadioButton *decodeMethodWalk;

		/* Audio Box */
		void makeAudioBox();
		QGroupBox *audioBox;
		QVBoxLayout *audioLayout;
		QComboBox *audioSource;
		QCheckBox *normCBox;
		QLabel *normLabel;
		QSlider *normSlider;
		QLabel *silenceLabel;
		QSlider *silenceSlider;

	signals:
		void autoReorientSig( bool );

	private slots:
		void formatCredit_checked( int state );
		void formatAAMVA_checked( int state );
		void autoReorient_checked( int state );

		void audioDeviceChanged( QString audioDevice );
		void timeOutChanged( int value );
		void decodeMethodChanged( bool checked );
		void normChanged( int value );
		void silenceChanged( int value );
		void normChecked( int state );

		void resetAll( bool updateGui = true );

};

#endif // SETTINGSPAGE_H
