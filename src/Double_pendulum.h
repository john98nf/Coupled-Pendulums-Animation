#ifndef DOUBLE_PENDULUM_H
#define DOUBLE_PENDULUM_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include"pendulum.h"
class coupled_pendulum_up:public pendulum
{
    public:
        coupled_pendulum_up(const Vector2f& origin,const Color& c,const Color& cr,float rope_length);
        ~coupled_pendulum_up();
        coupled_pendulum_up(const coupled_pendulum_up& other);
        virtual void upd_position(const Time& t)override;
    private:
        float o1;
        float o2;
};
class coupled_pendulum_down:public pendulum
{
    public:
        coupled_pendulum_down(const Vector2f& origin,const Color& c,const Color& cr,float rope_length);
        ~coupled_pendulum_down();
        coupled_pendulum_down(const coupled_pendulum_down& other);
        virtual void upd_position(const Time& t,const coupled_pendulum_up& pnd);
    private:
        float o1;
        float o2;
};

#endif // DOUBLE_PENDULUM_H
