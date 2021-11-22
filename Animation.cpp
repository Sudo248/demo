//
// Created by duonglh on 22/11/2021.
//

#include "Animation.h"

Animation::Animation() {

}

Animation::Animation(vector<Texture> &listTexture, float switchTime) {
    this->listTexture = listTexture;
    this->switchTime = switchTime;
    currentFrame = 0;
    totalTime = 0;
    sprite.setTexture(listTexture[currentFrame]);
}

void Animation::update(float deltaTime) {
    totalTime+=deltaTime;
    if(totalTime>=switchTime) {
        totalTime-=switchTime;
        currentFrame++;
        if (currentFrame > listTexture.size () - 1) {
            currentFrame = 0;
        }
    }
    if(currentFrame >= 6) currentFrame = 0;
    sprite.setTexture(listTexture[currentFrame]);
}

Sprite &Animation::getSprite() {
    return sprite;
}

void Animation::setSprite(Sprite &sprite) {
    sprite.setTexture(listTexture[currentFrame]);
}
