#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    char a[1000];
    int i,j;
    cin.getline(a,1000);
    for(i = 0 ; a[i] != '\0' ; i ++)
        a[i] = a[i] - 3;
    cout << a << endl;
}
