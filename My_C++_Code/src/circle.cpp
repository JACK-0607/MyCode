#include "point.h"
#include "circle.h"
void Circle::set_R(double R)
{
    m_R=R;
}
double Circle::get_R(void)
{
    return m_R;
}
void Circle::set_Center(Point center_P)
{
    m_Center =center_P;
}
Point Circle::get_Center(void)
{
    return m_Center;
}
void isInCircle(Point &p,Circle &c)
{
    double distance=(c.get_Center().get_X()-p.get_X()) *(c.get_Center().get_X()-p.get_X())
                +(c.get_Center().get_Y()-p.get_Y()) *(c.get_Center().get_Y()-p.get_Y());
    double rdistance=c.get_R()*c.get_R();
    if(distance==rdistance)
    {
        cout<<"on"<<endl;
    }
    else if(distance>rdistance)
    {
        cout<<"out"<<endl;
    }
    else
    {
        cout<<"in"<<endl;
    }
}
