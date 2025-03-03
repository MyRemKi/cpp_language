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
        else if(request=="stop"){
            m_thread.Thread_Stop();
        }
        else if(request=="exit"){
            if(m_thread.Thread_Status()==true){
                m_thread.Thread_Stop();
            }
        }
        else if(request=="help"){
            cout<<"start / stop"<<endl;
            cout<<"exit / help"<<endl;
        }
        else{
            cout<<"Error command"<<endl;
        }
    }
    return 0;
}