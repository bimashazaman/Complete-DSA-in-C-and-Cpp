
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

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i; // counter

    if (index >= 0 && index <= arr->length)
    {
        x = arr->A[index]; // store element to be deleted

        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1]; // shift elements to left
        }                              // end for

        arr->length--; // decrement length

        return x; // return deleted element
    }

    return 0; // return 0 if index is invalid
}

int main()
{

    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    cout << Delete(&arr, 4) << endl;
    
    //show the array
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    } // end for





    return 0;
}