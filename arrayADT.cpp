
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Array
{
    int size;   // size of array
    int length; // number of elements in array
};

int main()
{

    struct Array arr; // create array

    int n, i; // n is size of array, i is counter

    cout << "Enter size of an array" << endl; // prompt user for size of array

    cin >> arr.size; // take input from user

    int *A = new int[arr.size]; // create array in heap

    arr.length = 0; // set length to 0

    cout << "Enter number of numbers" << endl; // prompt user for number of numbers

    cin >> n; // take input from user

    cout << "Enter all elements" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> A[i]; // take input from user
    }                // end for

    arr.length = n; // set length to n

    // Displaying array elements

    cout << "Elements are" << endl; // prompt user for elements

    for (i = 0; i < arr.length; i++)
    {
        cout << A[i] << endl; // display elements
    }                         // end for

    return 0;
}