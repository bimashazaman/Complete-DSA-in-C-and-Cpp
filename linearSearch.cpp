
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

int LinearSearch(struct Array *arr, int key)
{
    int i; // counter

    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            return i; // return index of key
        }             // end if
    }                 // end for

    return -1; // return -1 if key not found
}

int main()
{

    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    cout << LinearSearch(&arr, 4) << endl;

    return 0;
}