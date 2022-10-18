
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
    cout << "Length of Rectangle: " << r1.len << endl;
    cout << "Breadth of Rectangle: " << r1.Breadth << endl;

    return 0;
}
