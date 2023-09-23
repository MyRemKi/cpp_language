#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
bool Algorithme(int min, int max, int nb_generation);
int main(int argc, char **argv)
{
    bool retour=true;
    
    cout<<"Attention le nombre de generation ne peut pas etre superieure au y (maximum) et inférieure à x (minimum)"<<endl;
    sleep(7);
    system("clear");
    
    while(retour){
        
        int x=0,y=0,nb_generation=0;
        
        cout<<"nombre x (le nombre minimum par exemple) : ";
        cin>>x;
        system("clear");
        
        cout<<"nombre y (le nombre maximum par exemple) : ";
        cin>>y;
        system("clear");
        
        cout<<"nombre de generation souhaité : ";
        cin>>nb_generation;
        system("clear");
        
        retour=Algorithme(x,y,nb_generation);
    }
    
	return 0;
}

bool Algorithme(int min, int max, int nb_generation){
    
    if(nb_generation<max){
        
        vector <int> liste;
        srand (time(NULL));
        int y=0;
        
        while(y<nb_generation){
            int r=rand() % x-min + (min);
            bool retour=true;
            
            for(int x=0; x<liste.size();x++){
                
                if(r== liste[x]){
                    retour=false;
                }
                
            }
            
            if(retour){
                liste.push_back(r);
                y++; 
            }
        }
        cout<<"*******************************"<<endl;
        cout<<"avant le trie :"<<endl;
        for(int x=0;x<liste.size();x++){
            cout<<liste[x]<<" ";
        }
        cout<<endl;
      
        for(int z=0;z<liste.size();z++){
            for(int x=0;x<(int)(liste.size());x++){
                
                y=liste[x];
                int bon=0,c=0,d=0;
                
                while(bon==0){
                    if(y!=liste[c] && y>liste[c]){
                        c++;
                    }
                    
                    else{
                        
                        d=liste[c];
                        liste[c]=y;
                        liste[x]=d;
                        bon=1;
                        
                    }
                }
            }
        }
        cout<<"*******************************"<<endl;
        cout<<"apres le trie :"<<endl;
        for(int x=0;x<liste.size();x++){
            cout<<liste[x]<<" ";
        }
        cout<<endl;
    }
    else{
        /*cout<<"nb de generation trop eleve par rapport au nombre y !"<<endl;
        sleep(3);
        system("clear");
        cout<<" echec de generation de distances, programme en arrêt ..."<<endl;
        sleep(5);
        system("clear");*/
        return false;
    }
    cout<<"*******************************"<<endl;
    /*sleep(3);
    system("clear");*/
    return true;
}
