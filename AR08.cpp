#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int input[110];
    int i, j, max = 0, temp = 0;
    for(i = 0 ; scanf("%d",&input[i]) != EOF ; i ++)
    {// if it is max, than can't add the number < 0
        if((input[i] + temp) >= 0)
        {
            temp = temp + input[i];
            if(temp > max)
                max = temp;
        }
        else
            temp = 0;
    }
    if(max < 0)
        max = 0;
    cout << max << endl;
}
