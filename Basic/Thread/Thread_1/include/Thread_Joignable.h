#ifndef THREAD_JOIGNABLE_H
#define THREAD_JOIGNABLE_H

#include <iostream>
#include <thread>
#include <chrono>

class Thread_Joignable
{
public:
    Thread_Joignable();
    void Thread_Algorithm();
    int Thread_Start();
    void Thread_Pause(){threadstatus=2;};
    void Thread_UnPause(){threadstatus=1;};
    void Thread_Stop();
    int Thread_Status(){return threadstatus;};
    int Thread_Count(){return count;};
    ~Thread_Joignable();

private:
    std::thread m_thread;
    int threadstatus=0;
    int count=0;
};

#endif