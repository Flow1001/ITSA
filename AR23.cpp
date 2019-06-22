#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    char input[1000],output[1000];
    cin.getline(input,1000);
    int length = strlen(input);
    int i;
    for(i = 0 ; i < length ; i ++)
    {
        if((input[i] >= 65) && (input[i] <= 77))
            output[i] = input[i]+13;
        else if((input[i] >= 97) && (input[i] <= 109))
            output[i] = input[i]+13;
        else if((input[i] >= 78) && (input[i] <= 90))
            output[i] = input[i]-13;
        else if((input[i] >= 110) && (input[i] <= 122))
            output[i] = input[i]-13;
        else
            output[i] = input[i];
    }
    output[i] = '\0';
    cout << output << endl;
}
