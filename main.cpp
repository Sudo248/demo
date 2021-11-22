#include <iostream>
#include "Animation.h"
int main() {

    vector<Texture> listTexture;

    Sprite sprite;

    for(int i = 1;i <=6;i++){
        string path = "../bug/"+to_string(i) + ".png";
        Texture texture;
        texture.loadFromFile(path);

        listTexture.push_back(texture);
    }

    Animation animation = Animation(listTexture, 6.f);

    RenderWindow window = RenderWindow(VideoMode(500,500),"demo");


    while(window.isOpen()){
        Event evnt;
        while(window.pollEvent(evnt)){
            if(evnt.type == Event::Closed){
                window.close();
            }
        }
        animation.update(1.f);
        animation.setSprite(sprite);
        window.clear(Color::White);
        window.draw(sprite);
        window.display();

    }


    return 0;
}
