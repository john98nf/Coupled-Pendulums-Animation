#ifndef PENDULUM_H
#define PENDULUM_H
#include "SFML/Graphics.hpp"
#include <iostream>
#include <cmath>
#define pixelsize 252E-6
using namespace std;
using namespace sf;
class pendulum
{
    public:
        pendulum(const Vector2f& org,const Color& c,const Color& cr,float rope_length);
        ~pendulum(){};
        pendulum(const pendulum& other);
        Vector2f getOrigin();
        virtual Vector2f getPosition();
        float get_length();
        virtual void draw_to_screen(RenderWindow& w);
        virtual void upd_position(const Time& t);
        Vector2f getOrigin()const;
        virtual Vector2f getPosition()const;
        float get_length()const;
        virtual void draw_to_screen(RenderWindow& w)const;
        float getomega();
    protected:
        CircleShape mass;
        Vertex rope[2]={Vertex(Vector2f(0,0)),Vertex(Vector2f(0,0))};
        float omega;
        float length;
        Vector2f equillibrium;
};

#endif // PENDULUM_H
