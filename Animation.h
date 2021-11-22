//
// Created by duonglh on 22/11/2021.
//

#ifndef DEMO_ANIMATION_H
#define DEMO_ANIMATION_H

#include "SFML/Graphics.hpp"
#include <vector>
using namespace std;
using namespace sf;

class Animation{

private :
    vector<Texture> listTexture;
    int currentFrame;
    float totalTime, switchTime;
    Sprite sprite;

public:

    Animation();

    Animation(vector<Texture> &listTexture, float switchTime);

    void update(float);

    Sprite& getSprite();

    void setSprite(Sprite& sprite);

};


#endif //DEMO_ANIMATION_H
