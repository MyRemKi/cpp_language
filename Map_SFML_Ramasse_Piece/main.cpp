#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <stdlib.h>
#include <string>
using namespace::std;

int r=75,g=75,b=75;

int tailleX=11, tailleY=11, i=0,j=0, px=5, py=5, piecex=0, piecey=0, point=0; //Déclaration des variables
bool GestionPosistionPersonnage(string str);
string sol=" ", mur="#", perso="O", undefinied=" ", piece="$";
bool piece_trouvé=false;

int main(){
    srand (time(NULL));
    piecex=rand() % 9 + 1;
    piecey=rand() % 9 + 1;
    string map[tailleY][tailleX]; //Déclaration du tableau (MAP)
    sf::RenderWindow window(sf::VideoMode(1920,1080),""); //Déclaration SFML Window
    
    sf::Font font;
    if(!font.loadFromFile("/usr/share/fonts/truetype/dejavu/DejaVuSerifCondensed.ttf")){
        return 1;
    }
    sf::Text text(to_string(point),font,50);
    text.setFillColor(sf::Color(200,68,35));
    text.setPosition(30,30);
    sf::Text text_map(" ",font,20);
    text_map.setFillColor(sf::Color::White);
//*****************************************************//    
    for(i=0;i<tailleY;i++){
        for(j=0;j<tailleX;j++){
          map[i][j]=mur;
        }
    }
    
    for(i=1;i<tailleY-1;i++){
        for(j=1;j<tailleX-1;j++){
          map[i][j]=sol;
        }
    }
    
    map[py][px]=perso; // POSITION DU PERSONNAGE
//*****************************************************//    
    for(i=0;i<tailleX;i++){
        for(j=0;j<tailleY;j++){
          cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
    
//*****************************************************//    
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            
            if(event.type == sf::Event::Closed){
                window.close();
            }
             
            if(event.type == sf::Event::KeyPressed){
                
                /* Aller en haut */
                if(event.key.code == sf::Keyboard::Z){
                        py=py-1;
                        undefinied=map[py][px];
                        if(undefinied==mur){
                            py=py+1;
                        }
                        else{
                            map[py][px]=perso;
                            py=py+1;
                            map[py][px]=sol;
                            py=py-1;
                        }
                        
                        if(map[piecex][piecey]==perso){
                            point=point+1;
                            text.setString(to_string(point));
                            while(map[piecex][piecey]==map[py][px])
                                piecey=rand() % 8 + 2;
                                piecex=rand() % 8 + 2;
                            }
                            map[piecex][piecey]=piece;
                        system("clear");
                        for(i=0;i<tailleX;i++){
                            for(j=0;j<tailleY;j++){
                                cout<<map[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                }
                
                /* Aller en bas */
                if(event.key.code == sf::Keyboard::S){
                        py=py+1;
                        undefinied=map[py][px];
                        if(undefinied==mur){
                            py=py-1;
                        }
                        else{
                            map[py][px]=perso;
                            py=py-1;
                            map[py][px]=sol;
                            py=py+1;
                        }
                        
                        if(map[piecex][piecey]==perso){
                            point=point+1;
                            text.setString(to_string(point));
                            while(map[piecex][piecey]==map[py][px])
                                piecey=rand() % 8 + 2;
                                piecex=rand() % 8 + 2;
                            }
                            map[piecex][piecey]=piece;
                        system("clear");
                        for(i=0;i<tailleX;i++){
                            for(j=0;j<tailleY;j++){
                                cout<<map[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                }
                
                /* Aller à droite */
                if(event.key.code == sf::Keyboard::D){
                        px=px+1;
                        undefinied=map[py][px];
                        if(undefinied==mur){
                            px=px-1;
                        }
                        else{
                            map[py][px]=perso;
                            px=px-1;
                            map[py][px]=sol;
                            px=px+1;
                        }
                        
                        if(map[piecex][piecey]==perso){
                            point=point+1;
                            text.setString(to_string(point));
                            while(map[piecex][piecey]==map[py][px])
                                piecey=rand() % 8 + 2;
                                piecex=rand() % 8 + 2;
                            }
                            map[piecex][piecey]=piece;
                        system("clear");
                        for(i=0;i<tailleX;i++){
                            for(j=0;j<tailleY;j++){
                                cout<<map[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                }
                
                /* Aller à gauche */
                if(event.key.code == sf::Keyboard::Q){
                        px=px-1;
                        undefinied=map[py][px];
                        if(undefinied==mur){
                            px=px+1;
                        }
                        else{
                            map[py][px]=perso;
                            px=px+1;
                            map[py][px]=sol;
                            px=px-1;
                        }
                        
                        if(map[piecex][piecey]==perso){
                            point=point+1;
                            text.setString(to_string(point));
                            while(map[piecex][piecey]==map[py][px])
                                piecey=rand() % 8 + 2;
                                piecex=rand() % 8 + 2;
                            }
                            map[piecex][piecey]=piece;
                        system("clear");
                        for(i=0;i<tailleX;i++){
                            for(j=0;j<tailleY;j++){
                                cout<<map[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                }
            }
        }
        
        window.clear(sf::Color(r,g,b));
        for(i=0;i<tailleX;i++){
            for(j=0;j<tailleY;j++){
                if(map[j][i]==piece){
                    text_map.setFillColor(sf::Color::Green);
                }
                text_map.setString(map[j][i]);
                text_map.setPosition(650+i*40,350+j*40);
                window.draw(text_map);
                text_map.setFillColor(sf::Color::White);
            }
        }
        window.draw(text);
        window.display();
    }
}