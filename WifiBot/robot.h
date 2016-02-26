#ifndef ROBOT_H
#define ROBOT_H

#include <QObject>

class Robot : public QObject
{
    Q_OBJECT
public:
    explicit Robot(QObject *parent = 0);

signals:

public slots:
    void mise_a_jour_info_connexion(QString IP2, int port2);
    void connexion();


private:    // variable
    QString IP;
    int port;
    QTcpSocket soc;
    int port;
};



#endif // ROBOT_H
