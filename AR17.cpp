#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int input[10000];
    int i, j, max = 0, temp = 0, count1, count2;
    cin >> count1;
    for(j = 0 ; j < count1 ; j ++)
    {
        max = 0;
        temp = 0;
        cin >> count2;
        for(i = 0 ; i < count2 ; i ++)
        {
            cin >> input[i];
            if((input[i] + temp) >= 0)
            {
                temp = temp + input[i];
                if(temp > max)
                    max = temp;
            }
            else
            {
                temp = 0;
            }//printf("max = %d  temp = %d\n ",max, temp);
        }
        if(max < 0)
            max = 0;
        cout << max << endl;
    }

}
