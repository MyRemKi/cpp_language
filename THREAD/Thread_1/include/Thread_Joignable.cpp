#include "Thread_Joignable.h"

Thread_Joignable::Thread_Joignable()
{

}
void Thread_Joignable::Thread_Stop(){
    threadstatus=0;
    if (m_thread.joinable()){
        m_thread.join();
    }
};
void Thread_Joignable::Thread_Algorithm(){
    while (threadstatus==1 || threadstatus==2) {
        while(threadstatus==2){
             std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        count++;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
    }
    std::cout << "Exited Thread" << std::endl;
}
int Thread_Joignable::Thread_Start(){
    if (!m_thread.joinable()){
            count=0;
            m_thread = std::thread(&Thread_Joignable::Thread_Algorithm,this);
        }
    threadstatus=1;
    return threadstatus;
}
Thread_Joignable::~Thread_Joignable()
{
    if (m_thread.joinable()){
        m_thread.join();
    }
}