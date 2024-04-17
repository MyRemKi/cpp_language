#ifndef MYAPP_H
#define MYAPP_H

#include <wx/app.h>

class MyApp : public wxApp
//class MyApp : public wxAppConsole
{
    public:
        virtual bool OnInit();
        //virtual int OnRun();
        int Menu();
private:
        wxString commande;
        wxString message;
        wxLocale m_locale;
        bool RecupereParametres();
        wxString m_fichier;
        long pid;

};

#endif // MYAPP_H
