#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    long long int a, b;
    cin >> a >> b;
    if(b > a)
    cout << b-a << endl;
    else
    cout << a-b << endl;
}
