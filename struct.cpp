
#include <stdio.h>
#include <iostream>

using namespace std;


struct Rectangle {
    int len;
    int Breadth;
} r1;


int main()
{
    struct Rectangle r1 = {10, 5};
    printf("%lu", sizeof(r1));

    return 0;
}
