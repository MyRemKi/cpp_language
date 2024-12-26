#include "ClockGame.h"
     
ClockGame::ClockGame(){

}

bool ClockGame::GetShotClock(){
    return (ShotCoolDown >= ShotClock.getElapsedTime().asSeconds());
}

void ClockGame::RestartShotClock(){

}

bool ClockGame::GetRecieveDamageClock(){

}

void ClockGame::RestartRecievrDamageClock(){

}

bool ClockGame::GetNextRoundClock(){

}

void ClockGame::RestartNextRoundClock(){

}

ClockGame::~ClockGame(){

}