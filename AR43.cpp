#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int row, col;
    int matrix1[10][10], matrix2[10][10];
    int i, j;
    cin >> row >> col;
    for(i = 0 ; i < row ; i ++)
    {
        for(j = 0 ; j < col ; j ++)
        {
            cin >> matrix1[i][j];
        }
    }
    for(i = 0 ; i < row ; i ++)
    {
        for(j = 0 ; j < col ; j ++)
        {
            cin >> matrix2[i][j];
        }
    }
    for(i = 0 ; i < row ; i ++)
    {
        for(j = 0 ; j < col ; j ++)
        {
            if(j == 0)
                cout << matrix1[i][j] + matrix2[i][j];
            else
                cout << ' ' << matrix1[i][j] + matrix2[i][j];
        }
        cout << endl;
    }
}
