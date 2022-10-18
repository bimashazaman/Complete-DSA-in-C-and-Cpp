
#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
   int A[5] = {3,54,5,6,54};
   int *P;
   
   P = A;
   
   for(int i=0; i<5; i++)
       cout << P[i] << endl;
   

    return 0;
}