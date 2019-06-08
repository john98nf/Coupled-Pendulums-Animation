#include <iostream>
#include <SFML/Graphics.hpp>
#include "Double_pendulum.h"
using namespace std;
using namespace sf;
int main(void){
    RenderWindow wnd(VideoMode(513,600),"Coupled Pendulums",Style::Close|Style::Titlebar);
    Event my_event;
    coupled_pendulum_up pnd1(Vector2f(256,0),Color::Blue,Color::Black,250);
    coupled_pendulum_down pnd2(pnd1.getPosition(),Color::Red,Color::Black,250);
    Clock clock;
    Time t;
    Time delay=milliseconds(120);
    cout<<"Pendulums are oscillating."<<endl;
    while(wnd.isOpen()){
        while(wnd.pollEvent(my_event)){
            if(my_event.type==my_event.Closed){
                wnd.close();
                cout<<"You just closed the window."<<endl;
            }
        }
        t=clock.getElapsedTime();
        pnd1.upd_position(t);
        pnd2.upd_position(t,pnd1);
        wnd.clear(Color::White);
        pnd1.draw_to_screen(wnd);
        pnd2.draw_to_screen(wnd);
        wnd.display();
        sleep(delay);
    }
    return 0;
}
