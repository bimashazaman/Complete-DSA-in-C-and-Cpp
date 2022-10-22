
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    else {
        return sum(n-1) + n;
    }
}



int main(){

    int x = 3; // Function call
    cout << sum(x); // Recursive function

    return 0;
}