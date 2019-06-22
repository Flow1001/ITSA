#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int input;
    int div[100000], sum, flag;
    int i, j;
    cin >> input;
    for(i = 2 ; i <= input ; i ++)
    {
        sum = 0;
        for(j = 1 ; j < i ; j ++)
        {
            if((i % j) == 0)
                div[j] = 1;
            else
                div[j] = 0;
            if(div[j] == 1)
                sum = sum + j;
        }
        if(i == sum)
            cout << i << endl;
    }
}
