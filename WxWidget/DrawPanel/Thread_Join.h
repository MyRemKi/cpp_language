#ifndef Thread_Join_H
#define Thread_Join_H
#include <wx/log.h>
#include <wx/thread.h>
#include <EvtFramePrincipal.h>

class Thread_Join : public wxThread
{
    public:
        Thread_Join(EvtFramePrincipal* frame);
        ~Thread_Join();

        void Calcule_Thread(const unsigned int index);
        bool IsOk();
        void SetFinDemandee () { fin_demandee=true; };
        
        ExitCode Entry();
        virtual void OnExit();
private:
        EvtFramePrincipal* my_frame;
    bool fin_demandee;

};

#endif // Thread_Join_H
