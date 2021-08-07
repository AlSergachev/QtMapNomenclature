#ifndef QTSECONDWIDGET_H
#define QTSECONDWIDGET_H

#include <QWidget>
#include "qmessagebox.h"

namespace Ui {
class QtSecondWidget;
}

class QtSecondWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QtSecondWidget(double &x, double &y, QString scale, QWidget *parent = nullptr);
    ~QtSecondWidget();
    Ui::QtSecondWidget *ui;


private:
    QString str_x, str_y,
        QN1, QN2, QN_One_million,
        QN3, QN_One_hundred_thousand,
        QN4, QN_Fifty_thousand,
        QN5, QN_Twenty_five_thousand,
        QN6, QN_Ten_thousand,
        Qn4, QN_Five_thousand,
        Qn5, QN_Two_thousand;
};


class One_million
{

protected:
    double sx;						//øàã ïî Õ
    double sy;						//øàã ïî Y
    int column_number;				//íîìåð êîëîíêè ñ êîîðäèíàòîé
    int string_number;				//íîìåð ñòðîêè ñ êîîðäèíàòîé
    int z;							//êîëè÷åñòâî êâàäðàòîâ
    int m;							//êîëè÷åñòâî ñòðîê
    int n;							//êîëè÷åñòâî ñòîëáöîâ
    int sheet_size;				//êîëè÷åñòâî ñòðîê.ñòîëáöîâ êâàäðàòà
    double north_result, south_result, west_result, east_result;

public:
    One_million(double m_sx, double m_sy);
    ~One_million();

    void coordinateTransformation(double& value, QString side, QtSecondWidget* UU);		//Ïåðåâîäèò çíà÷åíèÿ óãëîâ â ãðàä, ìèí, ñåê è âûâîäèò åãî çíà÷åíèå
    char setStringNumber(double& x, double& y);											//Oïðåäåëÿåò íîìåð ñòðîêè êâàäðàòà Ì 1:1 000 000
    int setColumnNumber(double& x, double& y);												//Oïðåäåëÿåò íîìåð ñòîëáöà êâàäðàòà Ì 1:1 000 000
    double setBorder1m(double& x, double& y, QString side);								//Oïðåäåëÿåò ãðàíèöû êâàäðàòà Ì 1:1 000 000
    void getBorder1m(double& x, double& y, QtSecondWidget* th_s);						//Âûâîäèò çíà÷åíèÿ ðàìîê êâàäðàòà Ì 1:1 000 000

};

class One_hundred_thousand: public One_million
{
public:
    int square_number = 0;																//íîìåð êâàäðàòà
    One_hundred_thousand(double m_sx, double m_sy);
    ~One_hundred_thousand();

    int setSquareNumber(double x, double y, double N, double E, int sheet_size);						//Oïðåäåëÿåò íîìåð êâàäðàòà
    double setBorder(double x, double y, double N, double E, int sheet_size, QString side);			//Oïðåäåëÿåò ãðàíèöû êâàäðàòà
    void getBorder(double x, double y, double N, double E, int sheet_size, QtSecondWidget* th_s);	//Âûâîäèò çíà÷åíèÿ ðàìîê êâàäðàòà
};

class Fifty_thousand: public One_hundred_thousand
{
public:
    Fifty_thousand(double m_sx, double m_sy);
    ~Fifty_thousand();

    wchar_t setSquareNumber50th(double x, double y, double N, double E);				//îïðåäåëÿåò íîìåð êâàäðàòà Ì 1:50 000
};

class Twenty_five_thousand: public Fifty_thousand
{
public:
    Twenty_five_thousand(double m_sx, double m_sy);
    ~Twenty_five_thousand();

    wchar_t setSquareNumber25th(double x, double y, double N, double E);				//îïðåäåëÿåò íîìåð êâàäðàòà Ì 1:25 000
};

class Ten_thousand: public Twenty_five_thousand
{
public:
    Ten_thousand(double m_sx, double m_sy);
    ~Ten_thousand();
};

class Five_thousand :public One_hundred_thousand
{
public:
    Five_thousand(double m_sx, double m_sy);
    ~Five_thousand();
};

class Two_thousand : public Five_thousand
{
public:
    Two_thousand(double m_sx, double m_sy);
    ~Two_thousand();

    wchar_t setSquareNumber2th(double x, double y, double N, double E);					//îïðåäåëÿåò íîìåð êâàäðàòà Ì 1:2 000
};

#endif // QTSECONDWIDGET_H
