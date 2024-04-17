#include "Thread_Join.h"

Thread_Join::Thread_Join(EvtFramePrincipal* frame)
        : wxThread(wxTHREAD_JOINABLE)
{
    my_frame=frame;
     fin_demandee=false;
}

Thread_Join::~Thread_Join()
{
}

bool Thread_Join::IsOk(){
    bool retour=true;
    if(Thread_Join::Create() != wxTHREAD_NO_ERROR){
        wxLogMessage("Next error : erreur sur la creation de thread");
        retour=false;
    }
    else{
        Thread_Join::Run();
    }
    return retour;
}

void Thread_Join::Calcule_Thread(const unsigned int index){
    my_frame->Calcul(index);
}
void Thread_Join::OnExit()
{
std::cout<<"Thread joignable: OnExit appelé"<<std::endl;
}
wxThread::ExitCode Thread_Join::Entry()
{
wxCommandEvent MyEvent( wxEVT_COMMAND_BUTTON_CLICKED,ID_THREAD_JOIGNABLE);
return (ExitCode)0;
}
