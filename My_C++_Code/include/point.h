#ifndef __POINT_H_
#define __POINT_H_
#include <iostream>
using namespace std;
class Point
{
public:
    void set_X(double X);
    void set_Y(double Y);

    double get_X(void);
    double get_Y(void);
private:
    double m_X;
    double m_Y;
};
#endif // __POINT_H_
