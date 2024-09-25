#include "Thread_Joinable.h"

Thread_Joinable::Thread_Joinable(QLabel *label)
{
    m_label=label;
}
void Thread_Joinable::Thread_Stop(){
    threadstatus=0;
    if (m_thread.joinable()){
        m_thread.join();
    }
};
void Thread_Joinable::Thread_Algorithm(){
    while (threadstatus==1 || threadstatus==2) {

        count++;
        m_label->setText(QString::number(count));
        std::this_thread::sleep_for(std::chrono::seconds(1));

        while(threadstatus==2){
             std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
    std::cout << "Exited Thread" << std::endl;
}
int Thread_Joinable::Thread_Start(){
    if (!m_thread.joinable()){
            count=0;
            m_thread = std::thread(&Thread_Joinable::Thread_Algorithm,this);
        }
    threadstatus=1;
    return threadstatus;
}
Thread_Joinable::~Thread_Joinable()
{
    if (m_thread.joinable()){
        m_thread.join();
    }
}
