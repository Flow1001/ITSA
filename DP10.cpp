#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int ncase;
    int i, j, input,fib[46];
    fib[1] = 1;
    fib[2] = 1;
    cin >> ncase;
    for(i = 0 ; i < ncase ; i ++)
    {
        cin >> input;
        for(j = 3 ; j <= input ; j ++)
            fib[j] = fib[j-1] + fib[j-2];

        cout << fib[input] << endl;
    }
}
