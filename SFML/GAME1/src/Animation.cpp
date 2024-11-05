#include "Animation.h"
Animation::Animation(sf::Sprite* sprite, float frameTime) : sprite(sprite), frameTime(frameTime), elapsedTime(0), currentFrame(0) {          
}

void addFrame(const sf::IntRect& frame) {
    frames.push_back(frame);
}

void Animation::update(float deltaTime) {
    elapsedTime += deltaTime;
    if (elapsedTime >= frameTime) {
        elapsedTime = 0;
        currentFrame = (currentFrame + 1) % frames.size();
        sprite->setTextureRect(frames[currentFrame]);
    }
}
