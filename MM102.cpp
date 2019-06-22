#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int ncase, input[60];
    int i,j,t;
    cin >> ncase;
    for(i = 1 ; i <= ncase ; i ++)
        cin >> input[i];

    for(i = ncase ; i >= 1 ; i --)
    {
        for(j = ncase-1 ; j >= 1 ; j--)
        {
            if(input[j+1] > input[j])
            {
                t = input[j+1];
                input[j+1] = input[j];
                input[j] = t;
            }
        }
    }
    for(i = 1 ; i <= ncase ; i ++)
        cout << i << ' ' << input[i] << endl;
}
