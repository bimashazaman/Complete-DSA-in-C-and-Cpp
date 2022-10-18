
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
 

   int *POINER; // pointer to an integer
   
   POINER = (int *)malloc(5 * sizeof(int)); // allocate memory for 5 integers using malloc IN HEAP by C

   //  POINTER = new int[5]; // allocate memory for 5 integers using new IN HEAP by C++
   
   POINER[0]= 10; // assign value to first element
   POINER[1]= 12; // assign value to second element
   POINER[2] = 323; // assign value to third element
   
  
   
   for(int i=0; i<5; i++) // print values of array
       cout << POINER[i] << endl;
   

    return 0;
}
