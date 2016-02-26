#ifndef ROBOT_H
#define ROBOT_H

#include <QObject>
#include <QtNetwork/QTcpSocket>

class Robot : public QObject
{
    Q_OBJECT
public:
    explicit Robot(QObject *parent = 0);

signals:
    void vers_IHM_acquittement_connection();

public slots:
    void mise_a_jour_info_connexion(QString IP2, int port2);
    void connexion();

// signaux d'acquittement
private slots :
    void acquittement_connection();  // en provenance de la socket et émet un signal vers l'IHM
    void reception_paquet();       // en provenance de la socket, lit la socket, émet un signal vers l'IHM


private:    // variable
    QString IP;
    int port;
    QTcpSocket soc;
};



#endif // ROBOT_H
