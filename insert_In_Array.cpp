
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i; // counter
    cout << "Elements are" << endl;

    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << endl;
}

void append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
    else cout << "Array is full" << endl;    
}

int main()
{

    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    append(&arr, 10);
    Display(arr);

    return 0;
}