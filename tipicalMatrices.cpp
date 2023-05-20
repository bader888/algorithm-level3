
#include <iostream> //to use cout, cin ...std
#include <math.h>   // to use pow , floor, ceil ...ets
#include <vector>   //to use vector
#include <cstdio>   // to use %s , %f , %d
#include <iomanip>  //to use the setw mainpulator
#include <string>   //to use string methods
#include <cctype>   //to use the char functions
#include <fstream>  // to deal with file
// my libs
#include "mArrayLib.h"
#include "mCheckLib.h"
#include "mStringLib.h"
#include "myReadLib.h"

using namespace std;

bool CheckMatrixTypical(int MatrixOne[3][3], int MatrixTwo[3][3], int Cols, int Rows)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (MatrixOne[i][j] != MatrixTwo[i][j])
            {
                return false;
            }
        };
    }

    return true;
};

int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3];
    int arr2[3][3];

    mArrayLib::FillMatrixWithRandomNumbers(arr1, 3, 3, 1, 10);
    mArrayLib::FillMatrixWithRandomNumbers(arr2, 3, 3, 1, 10);

    printf("the matrix one: \n");
    mArrayLib::PrintMatrix(arr1, 3, 3);
    printf("the matrix two: \n");
    mArrayLib::PrintMatrix(arr2, 3, 3);

    if (CheckMatrixTypical(arr1, arr2, 3, 3))
    {
        printf("the matrix is equal");
    }
    else
    {
        printf("the matrix is not equal");
    }
    return 0;
};