#ifndef PLAYER_H
#define PLAYER_H

#include "BDD.H"

class Player{

    public:
        Player();
        ~Player();
    
        //Interaction
        bool ReturnIsAlive();
        int SendDamage();
        void RecieveDamage(int r_damage);
    private:
        bool IsDead=false;
        int life_point=0;
        int damage=0;
        int level=0;
        int xp=0;
        int next_max_xp;
}
#endif //PLAYER_H
