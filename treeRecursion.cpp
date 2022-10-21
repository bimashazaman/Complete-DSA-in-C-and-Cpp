
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


void fun(int x){ 
    if(x > 0){ // Base case
        cout << x << endl; // Print x
        fun(x-1); // Recursive call
        fun(x-1); // Recursive call
    }
} // Recursive function

//time complexity is O(2^n)
//space complexity is O(n)

//drow a tree of recursive calls
// 3
// 2 2
// 1 1 1 1
// 0 0 0 0 0 0 0 0



int main(){

    int x = 3; // Function call
    fun(x); // Recursive function
    return 0;
}

// Output:
// 3
// 2
// 1
// 1
// 2
// 1
// 1
