#ifndef CLOCKGAME_H
#define CLOCKGAME_H

#include <SFML/Graphics.hpp>

Class ClockGame {
    public :
        ClassGame();
        
        bool GetShotClock();
        virtual void RestartShotClock();
        
        bool GetRecieveDamageClock();
        virtual void RestartRecievrDamageClock();

        bool GetNextRoundClock();
        virtual void RestartNextRoundClock();

        virtual void RstartTimersClock(){
            timer1.restart();
            timer2.restart();
            timer3.restart();
        }
            
        virtual ~ClassGame();

    private :
        const float shotCoolDown=0.1f, nextroundCoolDown=5.0f, recievedamageCoolDown=5.0f;
        sf::Clock recievedamageclock, nextroundclock, shotclock;
        //sf::Clock timer1, timer2, timer3;
}

#endif CLOCKGAME_H
