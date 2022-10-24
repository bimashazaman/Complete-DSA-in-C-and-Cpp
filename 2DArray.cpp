
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    // first example

    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}}; // 2D array

    // Like this
    //  1 2 3 4
    //  2 4 6 8
    //  1 3 5 7

    // second example

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int *B[3];         // Array of pointers
    B[0] = new int[4]; // Create 1D array
    B[1] = new int[4]; // Create 1D array
    B[2] = new int[4]; // Create 1D array

    // Third example

    int **C;           // Pointer to pointer
    C = new int *[3];  // Create 1D array of pointers
    C[0] = new int[4]; // Create 1D array
    C[1] = new int[4]; // Create 1D array
    C[2] = new int[4]; // Create 1D array

    return 0;
}