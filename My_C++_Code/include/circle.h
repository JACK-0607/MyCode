#ifndef __CIRCLE_H_
#define __CIRCLE_H_
#include <iostream>
#include "point.h"
using namespace std;
class Circle
{
public:
    void set_R(double R);

    double get_R(void);

    void set_Center(Point center_P);

    Point get_Center(void);

private:
    double m_R;
    Point m_Center;
};
void isInCircle(Point &p,Circle &c);
#endif // __POINT_H_
