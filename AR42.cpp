#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int min, max, i, input;
    cin >> input;
    min = input;
    cin >> input;
    //set initial max and min
    if(input < min)
    {
        max = min;
        min = input;
    }
    else
        max = input;
    for(i = 3 ; i <= 10 ; i ++)
    {
        cin >> input;
        if(input < min)
            min = input;
        if(input > max)
            max = input;
    }
    cout << "Largest number = " << max << endl;
    cout << "Smallest number = " << min << endl;
}
