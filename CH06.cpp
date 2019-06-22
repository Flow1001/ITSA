#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
int main(void)
{
    float c, h, BAI;
    cin >> c >> h;
    h = h * h * h;
    h = sqrt(h);
    BAI = (c / h) - 18;
    if(BAI > 40)
        cout << "morbidly obese" << endl;
    else if(BAI > 30)
        cout << "obese" << endl;
    else if(BAI > 25)
        cout << "overweight" << endl;
    else if(BAI > 18)
        cout << "healthy" << endl;
    else
        cout << "underweight" << endl;

}
