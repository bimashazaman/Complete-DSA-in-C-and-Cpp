
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


struct Bimasha {
    int length;
    int Breadth;
};


int main()
{
 
   int *p1;
   char *p2;
   float *p3;
   double *p4;
   struct Bimasha *p5;
   
   cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
       
    
    return 0;
}
