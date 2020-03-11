#ifndef AAMVACARD_H
#define AAMVACARD_H

#include <QFont>
#include <QString>
#include <QWidget>

class MagCard;
class QEvent;
class QHBoxLayout;
class QLabel;
class QObject;
class QVBoxLayout;

class AAMVACard : public QWidget {
	Q_OBJECT
	public:
		explicit AAMVACard( MagCard *_card = 0 );
		void setCard( MagCard *_card );

	private:
		void showData();
		void reorient();

		enum {
			LANDSCAPE,
			PORTRAIT
		} orientation;

		MagCard *card;

		QVBoxLayout *layout;

		QLabel *aamvaIssuerName;
		QLabel *accountNumber;
		QLabel *aamvaAge;

		QWidget *vFlexWidget;
		QVBoxLayout *vFlexBox;

		QWidget *hFlexWidget;
		QHBoxLayout *hFlexBox;

		QLabel *expirationDate;
		QVBoxLayout *vboxExpirationDate;
		QWidget *vWidgetExpirationDate;

		QLabel *aamvaBirthday;
		QVBoxLayout *vboxaamvaBirthday;
		QWidget *vWidgetaamvaBirthday;

		QFont smallFont;
		QFont medFont;

	protected:
		bool eventFilter( QObject *obj, QEvent *event );

};

#endif // AAMVACARD_H
