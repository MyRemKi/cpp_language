#ifndef __EvtFramePrincipal__
#define __EvtFramePrincipal__

/**
@file
Subclass of FramePrincipal, which is generated by wxFormBuilder.
*/
#include <wx/timer.h>
#include <wx/dcclient.h>
#include <complex>
#include <wx/log.h>
#include <wx/string.h>
using std::complex;
using namespace std;
#include "BasicDrawPane.h"
#include "ParametresTrace.h"

enum
{
ID_THREAD_JOIGNABLE= 201,
ID_THREAD_DETACHE
};

#include "FramePrincipal.h"

//// end generated include

class Thread_Join;
/** Implementing FramePrincipal */
class EvtFramePrincipal : public FramePrincipal
{
	protected:
		// Handlers for FramePrincipal events.
		void OnButtonTraceClick( wxCommandEvent& event );
	public:
		/** Constructor */
		EvtFramePrincipal( wxWindow* parent );
	//// end generated class members
    //Déclaration Prototype Calcul
    void Calcul(const unsigned int &index);
private:
        //Déclaration Threads Joignables
        bool thread_fini;
        Thread_Join* my_Join_1;
        Thread_Join* my_Join_2;
        void OnThreadJoignableEvent(wxCommandEvent& event);
         void OnCloseFrame( wxCloseEvent& event );
        
         //Déclaration Timer
         wxTimer m_timer;
        void OnTimer(wxTimerEvent&);
        
        //Déclaration Par Défaut
        vector<wxStaticBoxSizer*> m_sbSizerDrawPanel;
        vector<BasicDrawPane*> m_drawPanels;
        vector<ParametresTrace> m_parametres_traces;
        void AddPanelTrace (const ParametresTrace param_trace, 
                            const wxString titre);


};

#endif // __EvtFramePrincipal__
