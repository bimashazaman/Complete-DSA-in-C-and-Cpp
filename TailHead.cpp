
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void fun(int x){ 
    if(x > 0){ // Base case
        cout << x << endl; // Print x
        fun(x-1); // Recursive call
    }
} // Recursive function


int main(){

    int x = 3; // Function call
    fun(x); // Recursive function
    return 0;
}