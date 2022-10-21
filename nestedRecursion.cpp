
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int fun(int n){
    if(n > 100){
        return n - 10;
    } else {
        return fun(fun(n + 11));
    }
} // Recursive function


int main(){

    int x = 95; // Function call
    cout << fun(x); // Recursive function

    return 0;
}