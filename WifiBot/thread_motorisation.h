#ifndef THREAD_MOTORISATION_H
#define THREAD_MOTORISATION_H

#include <QThread>


class thread_motorisation : public QThread
{

public:
    thread_motorisation();

protected:
     void run();
     void stop();
};

#endif // THREAD_MOTORISATION_H
