#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int i,f[10000], input;
    f[0] = 1;
    f[1] = 2;
    f[2] = 2;
    cin >> input;
    for(i = 3 ; i <= input ; i ++)
        f[i] = (f[i-1]/4) + (f[i-2]/2) + f[i-3];

    cout << f[input] << endl;
}
