
#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
    int a = 6;
    int *p;
    p = &a;
    
    cout << *p << endl;
    
    printf("using pointer %d %d", *p, &a);

    return 0;
}