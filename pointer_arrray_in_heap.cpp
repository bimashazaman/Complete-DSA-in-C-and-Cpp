
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
 

   int *p; // pointer to an integer
   
   p = (int *)malloc(5 * sizeof(int)); // allocate memory for 5 integers using malloc IN HEAP by C

   //  POINTER = new int[5]; // allocate memory for 5 integers using new IN HEAP by C++
   
   p[0]= 10; // assign value to first element
   p[1]= 12; // assign value to second element
   p[2] = 323; // assign value to third element
   
  
   
   for(int i=0; i<5; i++) // print values of array
       cout << p[i] << endl;
   

    return 0;
}
