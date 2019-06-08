#include "Double_pendulum.h"
#include <SFML/Graphics.hpp>

#define A1 5.328427125
#define A2 -0.85786437
#define A3 6.46446609
#define A4 3.5355339

coupled_pendulum_up::coupled_pendulum_up(const Vector2f& origin,const Color& c,const Color& cr,float rope_length):pendulum(origin,c,cr,rope_length){
    o1=(2+sqrt(2))*(this->getomega());
    o2=(2-sqrt(2))*(this->getomega());
    //cout<<o1<<" "<<o2<<endl;
}
coupled_pendulum_up::~coupled_pendulum_up(){}
coupled_pendulum_up::coupled_pendulum_up(const coupled_pendulum_up& other):pendulum(other){
    o1=other.o1;
    o2=other.o2;
}
void coupled_pendulum_up::upd_position(const Time& t){
    Vector2f dx(20*(cos(o1*t.asSeconds())-cos(o2*t.asSeconds())),0);
    mass.setPosition(equillibrium+dx);
    rope[1].position=mass.getPosition()+Vector2f(10,0);
}
coupled_pendulum_down::coupled_pendulum_down(const Vector2f& origin,const Color& c,const Color& cr,float rope_length):pendulum(origin,c,cr,rope_length){
    o1=(2+sqrt(2))*(this->getomega());
    o2=(2-sqrt(2))*(this->getomega());
}
coupled_pendulum_down::~coupled_pendulum_down(){}
coupled_pendulum_down::coupled_pendulum_down(const coupled_pendulum_down& other):pendulum(other){
    o1=other.o1;
    o2=other.o2;
}
void coupled_pendulum_down::upd_position(const Time& t,const coupled_pendulum_up& pnd){
    Vector2f dx(20*(cos(o1*t.asSeconds())+cos(o2*t.asSeconds())),0);
    mass.setPosition(equillibrium+dx);
    rope[0].position=pnd.getPosition();
    rope[1].position=mass.getPosition()+Vector2f(10,0);
}
