#include <SFML/Graphics.hpp>
#include <vector>

class Animation {
public:
    std::vector<sf::IntRect> frames; // Rectangles de découpe des frames
    sf::Sprite* sprite;              // Pointeur vers le sprite à animer
    float frameTime;                 // Temps par frame
    float elapsedTime;
    int currentFrame;

    Animation(sf::Sprite* sprite, float frameTime) 
        : sprite(sprite), frameTime(frameTime), elapsedTime(0), currentFrame(0) {}

    void addFrame(const sf::IntRect& frame) {
        frames.push_back(frame);
    }

    void update(float deltaTime) {
        elapsedTime += deltaTime;
        if (elapsedTime >= frameTime) {
            elapsedTime = 0;
            currentFrame = (currentFrame + 1) % frames.size();
            sprite->setTextureRect(frames[currentFrame]);
        }
    }
};
