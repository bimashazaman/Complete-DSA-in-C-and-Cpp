
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
    Rectangle(){
        length = 0;
        breadth = 0;
    } // Default constructor

    Rectangle(int l, int b){
        length = l;
        breadth = b;
    } // Parameterized constructor 

    int area(){
        return length*breadth;
    } 

    int perimiter(){
        int p;
        p = 2*(length+breadth);

        return p;
    } 

    void setLength(int l){
        length = l;
    } 

    void setBreadth(int b){
        breadth = b;
    } // Setter functions

    int getLength(){
        return length;
    } // Getter functions


    int getBreadth(){
        return breadth;
    } // Getter functions

    ~Rectangle(){
        cout << "Destructor called" << endl;
    } // Destructor

};


int main(){

    Rectangle r = {10,5}; // Default constructor

    int l,b; // Parameterized constructor

    printf("Enter length and breadth: ");

    std::cin >> l >> b;;

    r.setLength(l);
    r.setBreadth(b);

    int a = r.area();
    int peri = r.perimiter();

    printf("Area=%d Perimiter=%d Length=%d Breadth=%d \n", a, peri, r.getLength(), r.getBreadth());

    return 0;

}