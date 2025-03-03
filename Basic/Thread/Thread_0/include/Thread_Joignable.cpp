#include "../include/Thread_Joignable.h"

Thread_Joignable::Thread_Joignable()
{

}

void Thread_Joignable::Thread_Stop(){
    threadstatus=false;
    cout<<"Thread Stoped"<<endl;
    if (m_thread.joinable()){
        m_thread.join();
    }
}
void Thread_Joignable::Thread_Algorithm(){
    while (threadstatus){
        std::this_thread::sleep_for(std::chrono::seconds(sec));
    }
    std::cout << "Exited Thread" << std::endl;
}
bool Thread_Joignable::Thread_Start(){
    if(!m_thread.joinable()){
        m_thread = std::thread(&Thread_Joignable::Thread_Algorithm,this);
    }
    cout<<"Thread Started"<<endl;
    threadstatus=true;
    return threadstatus;
}
Thread_Joignable::~Thread_Joignable()
{
    if (m_thread.joinable()){
        m_thread.join();
    }
}