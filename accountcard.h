#ifndef ACCOUNTCARD_H
#define ACCOUNTCARD_H

#include <QFont>
#include <QString>
#include <QtCore/QEvent>
#include <QtWidgets/QWidget>
#include <QWidget>

class MagCard;
class QEvent;
class QHBoxLayout;
class QLabel;
class QObject;
class QVBoxLayout;

class AccountCard : public QWidget {
	Q_OBJECT
	public:
		explicit AccountCard( MagCard *_card = 0 );
		void setCard( MagCard *_card );

	private:
		void showData();

		void reorient();

		enum {
			UNSET,
			LANDSCAPE,
			PORTRAIT
		} orientation;

		MagCard *card;

		QVBoxLayout *layout;

		QLabel *accountNumber;
		QLabel *accountHolder;

		QWidget *vFlexWidget;
		QVBoxLayout *vFlexBox;

		QWidget *vWidgetAccountIssuer;
		QWidget *vWidgetExpirationDate;

		QWidget *hFlexWidget;
		QHBoxLayout *hFlexBox;

		QVBoxLayout *vboxExpirationDate;
		QLabel *expirationDate;

		QVBoxLayout *vboxAccountIssuer;
		QLabel *accountIssuer;

		QFont smallFont;
		QFont medFont;
		QFont accountNumberFont;

	protected:
		bool eventFilter( QObject *obj, QEvent *event );
};

#endif // ACCOUNTCARD_H
