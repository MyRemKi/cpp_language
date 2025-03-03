#include <iostream>
#include <string>
using namespace std;
using std::string;
#include "../include/Thread_Joignable.h"
int main(){
    Thread_Joignable m_thread;
    string request="";

    while(request!="exit"){
        cin>>request;

        if(request=="start"){
            m_thread.Thread_Start();
        }
        else if(request=="pause"){
            m_thread.Thread_Pause();
        }
        else if(request=="unpause"){
            m_thread.Thread_UnPause();
        }
        else if(request=="stop"){
            m_thread.Thread_Stop();
        }
        else if(request=="exit"){
            if(m_thread.Thread_Status()==1 || m_thread.Thread_Status()==2){
                m_thread.Thread_Stop();
            }
        }
        else if(request=="status"){
            cout<<"status : "<<m_thread.Thread_Status()<<endl;
        }
        else if(request=="count"){
            cout<<"count : "<<m_thread.Thread_Count()<<endl;
        }
        else if(request=="help"){
            cout<<"start / stop"<<endl;
            cout<<"pause / unpause"<<endl;
            cout<<"status / count"<<endl;
            cout<<"exit / help"<<endl;
        }
        else{
            cout<<"Error command"<<endl;
        }
    }
    return 0;
}