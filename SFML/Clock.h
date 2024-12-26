#ifndef CLOCKGAME_H
#define CLOCKGAME_H

#include <SFML/Graphics.hpp>

Class ClockGame{
    public :
        ClassGame();
        
        bool GetShotClock();
        void RestartShotClock();
        
        bool GetRecieveDamageClock();
        void RestartRecievrDamageClock();

        bool GetNextRoundClock();
        void RestartNextRoundClock();
        
        ~ClassGame();

    private :
        sf::Clock recievedamageclock, nextroundclock, shotclock;
        sf::Clock timer1, timer2, timer3;
}

#endif CLOCKGAME_H