#include "EvtFramePrincipal.h"
#include "Thread_Join.h"
EvtFramePrincipal::EvtFramePrincipal(wxWindow* parent)
:
FramePrincipal(parent),m_timer(this)
{
    thread_fini=false;
    my_Join_1=new Thread_Join(this);
    my_Join_2=new Thread_Join(this);
    Connect( ID_THREAD_JOIGNABLE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EvtFramePrincipal::OnThreadJoignableEvent) ,NULL, this );
    Connect(wxID_ANY,wxEVT_TIMER,wxTimerEventHandler(EvtFramePrincipal::OnTimer),NULL,this);
    m_timer.Start(1000);
}
// permet d'ajouter un panel pour tracer une courbe
void EvtFramePrincipal::AddPanelTrace (const ParametresTrace param_trace,
                                       const wxString titre)
{
    m_sbSizerDrawPanel.push_back(new wxStaticBoxSizer(
                                     new wxStaticBox( this, wxID_ANY, titre), wxVERTICAL));
    m_drawPanels.push_back(new BasicDrawPane( this, param_trace));
    m_sbSizerDrawPanel.back()->Add(m_drawPanels.back(), 1, wxEXPAND);
    bSizerPrincipal->Add(m_sbSizerDrawPanel.back(), 1, wxEXPAND, 5 );

    SetSizer(bSizerPrincipal);
    SetAutoLayout(true);
}

void EvtFramePrincipal::OnButtonTraceClick( wxCommandEvent& event )
{
    // on ajoute deux panels pour le tracé des courbes
    m_parametres_traces.push_back(ParametresTrace(-4.0,4.0,-1.0,1.0,0.001));
    AddPanelTrace(m_parametres_traces[0], "sin(x)");
    m_parametres_traces.push_back(ParametresTrace(0.0,10.0,0.0,3.2,0.001));
    AddPanelTrace(m_parametres_traces[1], wxT("Racine carrée de x"));

    m_buttonTrace->Hide(); // on cache le bouton de demande de tracé
    // on retrace l'IHM suite au masquage du bouton et à l'ajout des panels
    Layout();
    // on calcule les points des 2 fonctions
    my_Join_1->Calcule_Thread(0);
    my_Join_2->Calcule_Thread(1);
    
    thread_fini=true;
}

// Calcule les points à afficher en fonction des paramètres de tracé
void EvtFramePrincipal::Calcul(const unsigned int &index)
{
    // on calcule les points et on les ajoute à ceux à afficher
    float x=m_parametres_traces[index].Getxmin();
    do
    {
        
        float y=0;
        // on utilise la formule en fonction de l'index
        switch (index)
        {
        case 0:
            y=sin(x);
            break;
        case 1:
            y=sqrt(x);
            break;
        }
        m_drawPanels[index]->AjouteCoordonnee(complex<float> (x,y));
        x=x+m_parametres_traces[index].Getinc();
        //wxThread::Sleep(1);
    }
    while (x<m_parametres_traces[index].Getxmax());
}

//Vérification et création threads joignables
void EvtFramePrincipal::OnThreadJoignableEvent(wxCommandEvent& event){
    my_Join_1->IsOk();
    my_Join_2->IsOk();
}

//Destruction Threads 
void EvtFramePrincipal::OnCloseFrame( wxCloseEvent& event )
{
    if (thread_fini) 
        {
            my_Join_1->SetFinDemandee();
            my_Join_2->SetFinDemandee();
            my_Join_1->Wait();
            my_Join_2->Wait();
            delete my_Join_1;
            delete my_Join_2;
            Destroy();
        }
}

//Timer Horloge
void EvtFramePrincipal::OnTimer(wxTimerEvent&)
{
wxDateTime maintenant=wxDateTime::Now();
SetLabel(maintenant.FormatISOTime());
SetLabel(wxDateTime::Now().FormatISOTime());
}