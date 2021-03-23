#include <stdio.h>
#include <iostream>
#include <string>
#include <fun.h>
#include "point.h"
#include "circle.h"
using namespace std ;
class Person
{
public:
    static void func()
    {
        m_A=100;
        cout<<"static void func调用"<<endl;
    }
    static int m_A;
    int m_B;
};
int Person::m_A=0;
//int Person::m_B=0;
void test01()
{
    //1.通过对象访问
    Person p;
    p.func();
    //2.通过类名访问
    Person::func();
}
int main()
{
    printf("Begin!\n");
    test01();
    return 0;
}
