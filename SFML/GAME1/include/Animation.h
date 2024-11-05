#include <SFML/Graphics.hpp>
#include <vector>

class Animation {
public:
    Animation(sf::Sprite* sprite, float frameTime);
    void update();
    std::vector<sf::IntRect> frames;
    sf::Sprite* sprite;
    float frameTime;
    float elapsedTime;
    int currentFrame;
};
