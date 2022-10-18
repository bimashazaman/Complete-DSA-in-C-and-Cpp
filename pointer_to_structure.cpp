
#include <stdio.h>
#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};


int main()
{
   
    Point p1 = {10, 20}; //for normal variable

    cout << p1.x << endl; //10
    cout << p1.y << endl;

    Point *p = &p1; // for pointer variable

    cout << p->x << endl; // p->x is same as (*p).x
    cout << p->y << endl;

    return 0;
}
