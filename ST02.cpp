#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    char input[10000];
    int d, i, sum, temp;
    for( ; scanf("%s",input) != EOF ; )
    {
        d = strlen(input);
        input[d] = '\0';
        d = strlen(input);
        sum = 0;
        for(i = 0 ; i < d ; i ++)
            sum = (sum * 26) + (input[i] - 64);
        cout << sum << endl;
    }
}
