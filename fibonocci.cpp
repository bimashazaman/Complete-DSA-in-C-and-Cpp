
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;



int fib(int n){

    int t0 = 0; // 0th term
    int t1 = 1; // 1st term
    int s, i; // s is the sum of the previous two terms

    if(n <= 1) return n; // if n is 0 or 1, return n

    for(i = 2; i <= n; i++){ // start at 2 because we already have the first two terms
        s = t0 + t1; // sum of the previous two terms
        t0 = t1; // t0 is now the previous t1
        t1 = s; // t1 is now the previous sum
    }

    return s; // return the sum

}

int rfib(int n){
    if(n <= 1) return n;
    return rfib(n-2) + rfib(n-1);
}


int main(){

    int n = 9; // the nth term
    cout << fib(n) << endl; // print the nth term
    cout << rfib(n) << endl; // print the nth term


    return 0; // exit
}