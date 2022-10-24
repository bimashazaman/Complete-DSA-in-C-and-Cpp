
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    int *p, *q; // p is a pointer to an integer
    int i; // i is an integer

    p = (int *)malloc(5*sizeof(int)); // allocate memory for 5 integers
    p[0] = 2; p[1] = 4; p[2] = 6; p[3] = 8; p[4] = 10; // assign values to the array

    q = (int *)malloc(10*sizeof(int)); // allocate memory for 10 integers

    for(i = 0; i < 5; i++){ // copy the values from p to q
        q[i] = p[i]; // copy the values
    }

    free(p); // free the memory allocated to p

    p = q;// p now points to the memory allocated to q

    q = NULL; // q now points to nothing

    for(i = 0; i < 10; i++){ // print the values of p
        cout << p[i] << endl;
    }

    return 0; // exit


}