#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int a,b, sum;
    int i;
   cin >> a >> b;
    {
        sum = 0;
        for(i = a ; i <= b ; i ++)
        {
            if((i % 2) == 1)
                sum = sum + i;
        }
        cout << sum << endl;
    }
}
