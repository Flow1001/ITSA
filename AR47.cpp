#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int input;
    cin >> input;
    for( ; (input % 2) == 0 ; )
        input = input / 2;
    for( ; (input % 3) == 0 ; )
        input = input / 3;
    for( ; (input % 5) == 0 ; )
        input = input / 5;

    if(input == 1)
        cout <<"Regular number!" << endl;
    else
        cout << "Irregular number!" << endl;
}
