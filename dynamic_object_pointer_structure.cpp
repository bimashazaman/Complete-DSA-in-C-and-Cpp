
#include <stdio.h> // for printf
#include <iostream> // for cout
using namespace std; 

struct Point
{
    int x;
    int y;
};


int main()
{
   
    Point *p;

    p = (Point *)malloc(sizeof(Point)); // allocate memory for structure

    p->x = 10; // p->x is same as (*p).x
    p->y = 20;

    cout << p->x << endl; // p->x is same as (*p).x
    cout << p->y << endl;

    return 0;
}
