#include <SFML/Graphics.hpp>
#include <vector>

class Animation {
public:
    std::vector<sf::IntRect> frames;
    sf::Sprite* sprite;
    float frameTime;
    float elapsedTime;
    int currentFrame;
};
