#ifndef ADDRESSPAGEHANDLER_H
#define ADDRESSPAGEHANDLER_H

#include <QQuickItem>

class AddressPageHandler : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)// NOTIFY nameChanged)
    Q_PROPERTY(QString street READ street WRITE setStreet)// NOTIFY streetChanged)
    Q_PROPERTY(QString city READ city WRITE setCity)// NOTIFY cityChanged)
    Q_PROPERTY(QString state READ state WRITE setState)// NOTIFY stateChanged)
    Q_PROPERTY(QString region READ region WRITE setRegion)// NOTIFY regionChanged)
    Q_PROPERTY(QString email READ email WRITE setEmail)// NOTIFY emailChanged)
    Q_PROPERTY(long zip READ zip WRITE setZip) //NOTIFY zipChanged)
    Q_PROPERTY(long phone READ phone WRITE setPhone)// NOTIFY phoneChanged)
public:
    AddressPageHandler();
    QString name();
    QString street();
    QString city();
    QString state();
    QString region();
    QString email();
    long zip();
    long phone();
    void setName(QString n);
    void setStreet(QString s);
    void setCity(QString c);
    void setState(QString s);
    void setRegion(QString r);
    void setEmail(QString e);
    void setZip(long z);
    void setPhone(long p);
    //Q_INVOKABLE
signals:
    //may not need these signals
    //can use the submit button to set all
    /**
    void nameChanged(QString n);
    void streetChanged(QString s);
    void cityChanged(QString c);
    void stateChanged(QString s);
    void regionChanged(QString r);
    void emailChanged(QString e);
    void zipChanged(long z);
    void phoneChanged(long p);
    */

public slots:

private:
    QString m_name;
    QString m_street;
    QString m_city;
    QString m_state;
    QString m_region;
    QString m_email;
    long m_zip;
    long m_phone;
};

#endif // ADDRESSPAGEHANDLER_H
