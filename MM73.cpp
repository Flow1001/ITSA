#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
int main(void)
{
    float input, F;
    cin >> input;
    F = input * 9 / 5;
    F = F + 32;
    cout << "Fahrenheit = " <<  fixed << setprecision(2) << F << endl;
    cout << "Absolute temperature = " <<  fixed << setprecision(2) << input+273.15 << endl;
}
