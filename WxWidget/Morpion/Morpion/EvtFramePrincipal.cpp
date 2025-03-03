#include "EvtFramePrincipal.h"
#include <iostream>
#include <string.h>
EvtFramePrincipal::EvtFramePrincipal( wxWindow* parent )
:
FramePrincipal( parent ){
    sound=new wxSound();
}

void EvtFramePrincipal::OnClickBC0( wxCommandEvent& event ){
// TODO: Implement OnClickBC0
    if(table[0][0]==""){
        m_textCtrl1->Clear();
        m_button0->SetLabel(skin);
        table[0][0]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
        m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

void EvtFramePrincipal::OnClickBC1( wxCommandEvent& event ){
// TODO: Implement OnClickBC1
    if(table[0][1]==""){
        m_textCtrl1->Clear();
        m_button1->SetLabel(skin);
        table[0][1]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
        m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

void EvtFramePrincipal::OnClickBC2( wxCommandEvent& event ){
// TODO: Implement OnClickBC2
    if(table[0][2]==""){
        m_textCtrl1->Clear();
        m_button2->SetLabel(skin);
        table[0][2]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            MUSIC();
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
        m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

void EvtFramePrincipal::OnClickBC3( wxCommandEvent& event ){
// TODO: Implement OnClickBC3
    if(table[1][0]==""){
        m_textCtrl1->Clear();
        m_button3->SetLabel(skin);
        table[1][0]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
        m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

void EvtFramePrincipal::OnClickBC4( wxCommandEvent& event ){
// TODO: Implement OnClickBC4
    if(table[1][1]==""){
        m_textCtrl1->Clear();
        m_button4->SetLabel(skin);
        table[1][1]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
        m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

void EvtFramePrincipal::OnClickBC5( wxCommandEvent& event ){
// TODO: Implement OnClickBC5
    if(table[1][2]==""){
        m_textCtrl1->Clear();
        m_button5->SetLabel(skin);
        table[1][2]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
        m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

void EvtFramePrincipal::OnClickBC6( wxCommandEvent& event ){
// TODO: Implement OnClickBC6
    if(table[2][0]==""){
        m_textCtrl1->Clear();
        m_button6->SetLabel(skin);
        table[2][0]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
       m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

void EvtFramePrincipal::OnClickBC7( wxCommandEvent& event ){
// TODO: Implement OnClickBC7
    if(table[2][1]==""){
        m_textCtrl1->Clear();
        m_button7->SetLabel(skin);
        table[2][1]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
        m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

void EvtFramePrincipal::OnClickBC8( wxCommandEvent& event ){
// TODO: Implement OnClickBC8
    if(table[2][2]==""){
        m_textCtrl1->Clear();
        m_button8->SetLabel(skin);
        table[2][2]=skin;
        if(AlgoX()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AlgoO()){
            wxLogMessage(skin+" gagnée");
            MUSIC();
            Restart();
        }
        else if(AgloAllUsed()){
            wxLogMessage("peronne a gagné");
            Restart();
        }
        else{
            if(skin=="X"){
                skin="O";
            }
            else{
                skin="X";
            }
        }
    }
    else{
        m_textCtrl1->Clear();
        m_textCtrl1->SetValue("case rempli !");
    }
}

bool EvtFramePrincipal::AlgoX(){
    int x,y;
    bool retour=false;
    wxString str;
    
     //Retourne si trois meme caractere croisé en colonne |.
    y=0;
    while(y<3){
        str="";
        for(x=0;x<3;x++){
            str=str+table[x][y];
        }
        if(str=="XXX"){
            retour=true;
        }
        y=y+1;
    }
     //Retourne si trois meme caractere croisé en ligne _.
    x=0;
    while(x<3){
        str="";
        for(y=0;y<3;y++){
            str=str+table[x][y];
        }
        if(str=="XXX"){
            retour=true;
        }
        x=x+1;
    }
    
    //Retourne si trois meme caractere croisé en diagonal.
    str="";
    str=str+table[0][0]+table[1][1]+table[2][2];
    if(str=="XXX"){
        retour=true;
    }
    str="";
    str=str+table[2][0]+table[1][1]+table[0][2];
    if(str=="XXX"){
        retour=true;
    }
    return retour;
}

bool EvtFramePrincipal::AlgoO(){
        int x,y;
    bool retour=false;
    wxString str;
    
     //Retourne si trois meme caractere croisé en colonne |.
    y=0;
    while(y<3){
        str="";
        for(x=0;x<3;x++){
            str=str+table[x][y];
        }
        if(str=="OOO"){
            retour=true;
        }
        y=y+1;
    }
     //Retourne si trois meme caractere croisé en ligne _.
    x=0;
    while(x<3){
        str="";
        for(y=0;y<3;y++){
            str=str+table[x][y];
        }
        if(str=="OOO"){
            retour=true;
        }
        x=x+1;
    }
    
    //Retourne si trois meme caractere croisé en diagonal.
    str="";
    str=str+table[0][0]+table[1][1]+table[2][2];
    if(str=="OOO"){
        retour=true;
    }
    str="";
    str=str+table[2][0]+table[1][1]+table[0][2];
    if(str=="OOO"){
        retour=true;
    }
    return retour;
}

bool EvtFramePrincipal::AgloAllUsed(){
    bool retour=true;
    int x,y,i=0;
    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            if(table[x][y]==""){
                i=i+1;
            }
        }
    }
    if(i>=1){
        retour=false;
    }
    return retour;
}

void EvtFramePrincipal::Restart(){
    int x,y;
    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            table[x][y]="";
        }
    }
    m_button0->SetLabel("");
    m_button1->SetLabel("");
    m_button2->SetLabel("");
    m_button3->SetLabel("");
    m_button4->SetLabel("");
    m_button5->SetLabel("");
    m_button6->SetLabel("");
    m_button7->SetLabel("");
    m_button8->SetLabel("");
    m_textCtrl1->Clear();
    Print("x commence !");
    
    skin="X";
}

void EvtFramePrincipal::Print(wxString message){
    m_textCtrl1->SetValue(message);
}

bool EvtFramePrincipal::MUSIC(){
    bool marche=sound->Create("/home/user/Bureau/Mini_Jeu_Beta_V4//Mini_Jeu_Beta/Mini_Jeu/ahem_x.wav");
    if(marche){
        if(sound->IsOk()){
            sound->Play(wxSOUND_SYNC);
        }
    }
}