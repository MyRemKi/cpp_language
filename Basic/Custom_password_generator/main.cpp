#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <cctype>

using namespace std;
using std::string;
using std::vector;

void Configuration_Part_1(vector<int> &trame);
void Configuration_Part_2(vector<int> &trame);
void Configuration_Part_3(vector<int> &trame_entree, vector<string> &trame_sortie);
void Configuration_Part_4(vector<int> &trame_entree,vector<string> &trame_sortie);

int main(int argc, char **argv)
{
    //INIT
    bool end=false;
    
    //WARNING MSG
    cout<<"les réponses non respectés sera vu comme réponse négative (càd non)"<<endl;
    sleep(3);
    system("clear");
    
    while(!end){
        
        //INIT
        
        int reponse;
        vector<int> trame_choix={0,0,0,0};
        vector<string> trame_pwd;

        
        Configuration_Part_1(trame_choix); //Personnalisation PWD
        Configuration_Part_2(trame_choix); //Taille PWD
        Configuration_Part_3(trame_choix,trame_pwd); //Génération PWD
        Configuration_Part_4(trame_choix,trame_pwd); //Configuration PWD
        
        //AFFICHAGE TRAME
        for(int x=0; x<(int)trame_pwd.size();x++){
            cout<<trame_pwd[x];
        }
        cout<<endl;
        
        //BOUCLE ?
        cout<<"souhaitez-vous générer un autre mot de passe ? oui (1) ou non (0)";
        cin>>reponse;
        
        if(reponse==0){
            end=true;
            system("clear");
        }
        else{
            end=false;
        }
    }
}

void Configuration_Part_1(vector <int> &trame){
        
        //INIT
        
        system("clear");
        int reponse=0; //pour la personnalisation du pwd
        
        cout<<"reponse par 1(oui), 0(non)"<<endl;
        cout<<"--------------------------"<<endl;
        
        //NOMBRES
        cout<<"souhaite-tu des nombres ? :";
        cin>>reponse;
        trame[0]=reponse;
        
        //LETTRES
        cout<<"souhaite-tu des lettres ? :";
        cin>>reponse;
        trame[1]=reponse;
        
        //TAILLES LETTRES
        if(reponse==1){
            cout<<"reponse par 1(Min), 2(Maj), 3(Mix) :"<<endl;
            cout<<" Minuscule (Min), Majuscule (Maj), ou les deux (Mix) ? :";
            cin>>reponse;
            trame[2]=reponse;
        }
        else{
            trame[2]=0;
        }
        
        //CARACTERES
        cout<<"souhaite-tu des caractères spéciaux ? :";
        cin>>reponse;
        trame[3]=reponse;
}

void Configuration_Part_2(vector<int> &trame){
    
    //INIT
    system("clear");
    int reponse;
    
    //NOMBRES
    if(trame[0]==1){
        cout<<"combien de nombres ? :";
        cin>>reponse;
        trame[0]=reponse;
    }
    else{
        trame[0]=0;
    }
    
    //LETTRES
    if(trame[1]==1){
        cout<<"combien de lettres ? :";
        cin>>reponse;
        trame[1]=reponse;
    }
    else{
        trame[1]=0;
    }
    
    //CARACTERES
    if(trame[3]==1){
        cout<<"combien de caractères sépciaux ? :";
        cin>>reponse;
        trame[3]=reponse;
    }
    else{
        trame[3]=0;
    }
}

void Configuration_Part_3(vector<int> &trame_entree, vector<string> &trame_sortie){
    
    //INIT
    
    system("clear");
    srand (time(NULL));
    char table_alphabet[27]{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char table_nombre[10]{'0','1','2','3','4','5','6','7','8','9'};
    char table_caractere[5]{'#','@','!','&','*'};
    
    //NOMBRES
    for(int x=0;x<trame_entree[0];x++){
        string chaine(1,table_nombre[(rand() % 9)]);
        trame_sortie.push_back(chaine);
    }
    
    //LETTRES ET TAILLES
    if(trame_entree[2]==1){
        
        for(int x=0;x<trame_entree[1];x++){
            string chaine(1,table_alphabet[(rand() % 26)]);
            trame_sortie.push_back(chaine);
        }
    }
    else if(trame_entree[2]==2){
        
        for(int x=0;x<trame_entree[1];x++){
            string chaine(1,toupper(table_alphabet[(rand() % 26)]));
            trame_sortie.push_back(chaine);
        }
    }
    else if(trame_entree[2]==3){
        
        for(int x=0;x<trame_entree[1];x++){
            int random= rand() % 2;
            
            if(random==0){
                string chaine(1,table_alphabet[(rand() % 26)]);
                trame_sortie.push_back(chaine);
            }
            else{
                string chaine(1,toupper(table_alphabet[(rand() % 26)]));
                trame_sortie.push_back(chaine);
            }
        }
    }
    
    //CARACTERES SPECIAUX
    for(int x=0;x<trame_entree[3];x++){
        string chaine(1,table_caractere[(rand() % 4)]);
        trame_sortie.push_back(chaine);
    }
}

void Configuration_Part_4(vector<int> &trame_entree,vector<string> &trame_sortie){
    
    //INIT
    
    srand (time(NULL));
    vector<string> trame;
    trame_entree.erase(trame_entree.begin()+2);
    vector<int> trame_emplacement={0,0,0};
    
    //COPY
    for(int x=0;x<trame_sortie.size();x++){
        trame.push_back(trame_sortie[x]);
    }
    
    trame_sortie.clear();//CLEAR ORIGINAL PWD
        
    int nb_emplacement=trame.size();
    int emplacement;
    
    //CONFIG PWD
    for(int x=0;x<nb_emplacement;x++){
        emplacement=0;
        emplacement=(rand() % (nb_emplacement-x));
        trame_sortie.push_back(trame[emplacement]);
        trame.erase(trame.begin()+emplacement);
    }
}
