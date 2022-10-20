
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
    
    void initialise(int l, int b){
        length = l;
        breadth = b;
    }
    
    int area(){
        return length*breadth;
    }
    
    int perimiter(){
        int p;
        p = 2*(length+breadth);
        
        return p;
    }
    
};



int main()
{
    
    Rectangle r = {10,5};
    
    int l,b;
    
    printf("Enter length and breadth: ");
    
    std::cin >> l >> b;;
    
    r.initialise(l, b);
    
    int a = r.area();
    int peri = r.perimiter();
    
    printf("Area=%d\nPerimiter=%d\n", a, peri);
    
    return 0;
}
