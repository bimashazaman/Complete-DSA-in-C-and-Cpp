
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


template <class T> // T is a generic type
class Arithmetic {
    private: // private members
        T a;
        T b;

    public: 
    Arithmetic(T a, T b); // constructor
    T add(); // add function
}; // end of class

template <class T> // template class
Arithmetic<T>::Arithmetic(T a, T b){ // constructor
    this->a = a; // this pointer
    this->b = b; // this pointer
}; // end of constructor


template <class T>
T Arithmetic<T>::add(){
    T c;
    c = a+b;
    return c;
};

int main()
{
    Arithmetic<int> a(10, 20); // object of class
    int c = a.add(); // add function
    cout << c << endl; // print result
    
    Arithmetic<float> b(10.5, 20.5); // object of class
    float d = b.add(); // add function
    cout << d << endl; // print result
    
    return 0; // return 0 to end program
};


