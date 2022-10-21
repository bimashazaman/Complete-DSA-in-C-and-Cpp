
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


void funB(int n);


void funA(int n){
    if(n > 0){ // Base case
        cout << n << endl; // Print n
        funB(n-1); // Recursive call
    } 
}

void funB(int n){ // Recursive function
    if(n > 1){ // Base case
        cout << n << endl; // Print n
        funA(n/2); // Recursive call
    } // Recursive function
}

//time complexity is O(2^n)
//space complexity is O(n)





int main(){

    int x = 20; // Function call
    funA(x); // Recursive function
    return 0;
}
