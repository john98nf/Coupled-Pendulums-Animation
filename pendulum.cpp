#include "pendulum.h"
#include <cmath>
#define pixelsize 252E-6
using namespace sf;
using namespace std;
pendulum::pendulum(const Vector2f& origin,const Color& c,const Color& cr,float rope_length){
    length=rope_length;
    omega=sqrt(10/(length*pixelsize));
    //cout<<omega<<endl;
    mass.setFillColor(c);
    mass.setRadius(10);
    mass.setOutlineColor(Color::Black);
    mass.setOutlineThickness(2);
    rope[0].position=origin;
    rope[0].color=rope[1].color=cr;
    mass.setPosition(equillibrium=origin+Vector2f(-10,length));
    rope[1].position=mass.getPosition()+Vector2f(10,0);
}

pendulum::pendulum(const pendulum& other){
    mass=other.mass;
    for(int i=0;i<2;i++)rope[i]=other.rope[i];
    equillibrium=other.equillibrium;
    length=other.length;
}

float pendulum::getomega(){
	return omega;
}

float pendulum::get_length(){
	return length;
}

Vector2f pendulum::getOrigin(){
	return rope[0].position;
}

Vector2f pendulum::getPosition(){
	return mass.getPosition()+Vector2f(10,10);
}

float pendulum::get_length()const{
	return length;
}

Vector2f pendulum::getOrigin()const{
	return rope[0].position;
}

Vector2f pendulum::getPosition()const{
	return mass.getPosition()+Vector2f(10,10);
}

void pendulum::draw_to_screen(RenderWindow& w){
    w.draw(rope,2,Lines);
    w.draw(mass);
}

void pendulum::upd_position(const Time& t){
    Vector2f dx(10*cos(omega*t.asSeconds()),0);
    mass.setPosition(equillibrium+dx);
    rope[1].position=mass.getPosition()+Vector2f(10,0);
}

void pendulum::draw_to_screen(RenderWindow& w)const{
    w.draw(rope,2,Lines);
    w.draw(mass);
}

