
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int power(int m, int n){
    if(n==0){
        return 1;
    } else {
        return power(m, n-1)*m;
    }
}

int main(){
    int m = 2;
    int n = 3;
    cout << power(m, n) << endl;
    return 0;
}