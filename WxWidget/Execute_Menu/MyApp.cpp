#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "MyApp.h"
#include <iostream>
#include <wx/log.h>
#include <wx/cmdline.h>
#include <chrono>
#include <thread>
using std::cout;
using std::endl;

IMPLEMENT_APP(MyApp);

int MyApp::Menu(){
    int choix=0,O=1;
    
    while(O!=0){
        cout<<"/";
        std::cin>>choix;
        switch(choix){
            case 0:
                O=0;
                commande="exit ";
                break;
            case 1:
                commande="help ";
                break;
            case 2:
                commande="gvim ";
                break;
            case 3:
                commande="rm ";
                break;
            case 4:
                commande="mpg321 ";
                break;
            default:
            cout<<"erreur de choix"<<endl;
            cout<<"choisissez parmi les propositions données"<<endl;
        }
    }
    return choix;
}
bool MyApp::OnInit()
{
    // on choisit le français comme langue
    m_locale.Init(wxLANGUAGE_FRENCH);
    
    int boucle=0;
    int reponse=1;
    
    while(reponse!=boucle){
        
        reponse=Menu();

            RecupereParametres();
            m_fichier="\""+m_fichier+"\"";
            commande<<m_fichier;
            pid=wxExecute(commande, wxEXEC_ASYNC);
            message=" ";
            message.Printf("PID de ",commande," : %ld",pid);
            wxLogMessage(message);  
            
    }
    return false;
}

/*
int MyApp::OnRun()
{
    return 0;
}
*/
bool MyApp::RecupereParametres(int res)
{
    bool retour = false;
    // on définit le format des paramètres d'entrées
    static const wxCmdLineEntryDesc g_cmdLineDesc[] = 
    { 
        { wxCMD_LINE_SWITCH, "0", "exit", "quitter le programme" },
        { wxCMD_LINE_SWITCH, "1", "help", "afficher de l'aide" },
        { wxCMD_LINE_SWITCH, "2", "gvim", "ouvre gvim" },
        { wxCMD_LINE_SWITCH, "3", "rm", "supprime un fichier" },
        { wxCMD_LINE_SWITCH, "4", "mpg321", "jouer un son" },
        {wxCMD_LINE_PARAM, NULL, NULL, "fichier d'entree",wxCMD_LINE_VAL_STRING},
        {wxCMD_LINE_NONE}
        
    };
    // On scrute la ligne de commande
    wxString cmdFilename;
    wxCmdLineParser cmdParser(g_cmdLineDesc, argc, argv);
    
    // On passe false pour supprimer l'affichage automatique de Usage() message
    res = cmdParser.Parse(false);

    // Est ce que l'utilisateur a demandé l'aide en ligne de commande ?
    if(res == -1 || res > 0)
    {
        cmdParser.Usage();
    }

    // Est-ce que l'utilisateur a demandé la version ?
    if(cmdParser.Found("5"))
    {
        cout << "Projet minimal wxWidgets en mode console" << endl;
        ;
    }

    // On récupère le paramètre passé
    if(cmdParser.GetParamCount() == 1)
    {
        m_fichier = cmdParser.GetParam(0);
        retour = true;
    }

    return retour;
}
