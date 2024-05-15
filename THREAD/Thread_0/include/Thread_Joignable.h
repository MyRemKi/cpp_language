#ifndef THREAD_JOIGNABLE_H
#define THREAD_JOIGNABLE_H

#include <iostream>
#include <thread>
#include <chrono>
using std::endl;
using std::cout;
class Thread_Joignable
{
public:
    Thread_Joignable();
    void Thread_Algorithm();
    bool Thread_Status(){return threadstatus;};
    bool Thread_Start();
    void Thread_Stop();
    ~Thread_Joignable();

private:
    std::thread m_thread;
    bool threadstatus=false;
    int sec=1;
};

#endif