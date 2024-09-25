#ifndef THREAD_JOINABLE_H
#define THREAD_JOINABLE_H

#include <iostream>
#include <thread>
#include <chrono>
#include <QLabel>
class Thread_Joinable
{
public:
    Thread_Joinable(QLabel *label);
    void Thread_Algorithm();
    int Thread_Start();
    void Thread_Pause(){threadstatus=2;};
    void Thread_UnPause(){threadstatus=1;};
    void Thread_Stop();
    int Thread_Status(){return threadstatus;};
    int Thread_Count(){return count;};
    ~Thread_Joinable();

private:
    std::thread m_thread;
    int threadstatus=0;
    int count=0;
};

#endif
