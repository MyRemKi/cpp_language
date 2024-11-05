#include "Player.h"

Player::Player(){
    BDD *playerbdd;
    playerbdd=new BDD("PLAYER");
    //Traiter les informations du Player
}

//Interaction
bool Player::ReturnIsAlive(){
    return (life_point>0);
}

int Player::SendDamage(){
    return damage;
}
void Player::RecieveDamage(int r_damage){
    life_point -= r_damage;
}

Player::~PLayer(){

}
