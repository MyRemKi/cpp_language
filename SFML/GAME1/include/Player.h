#ifndef PLAYER_H
#define PLAYER_H

//CLASS INCLUDE
#include "BDD.H"

//SFML INCLUDE
#include <SFML/Graphics.hpp>

//STANDARD INCLUDE
#include <string.h>

//NAMESCPACE DELARATION
using namespace std;
using std::string;

class Player{

    public:
        Player(string p_texture);
        ~Player();

        //SETTINGS METHOD
        void SetAll(int plife_point, int pdamage, int plevel, int pxp, ppnext_max_xp);
        int GetData(string type);
        //INTERACTION METHOD
        bool ReturnIsAlive();
        int SendDamage();
        void RecieveDamage(int r_damage);

        //WINDOW METHOD
        void DrawPlayer(sf::WindowRender &window);
    private:
        //DATA VARIABLES
        bool IsDead=false;
        int life_point=0;
        int damage=0;
        int level=0;
        int xp=0;
        int next_max_xp;

        //IMAGE PART
        sf::Texture texture;
        sf::Sprite sprite;
}
#endif //PLAYER_H
