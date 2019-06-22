#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
int main(void)
{
    float BMI, h, w;
    cin >> h >> w;
    h = h / 100;
    BMI = (w / (h * h));
    cout << fixed << setprecision(1) << BMI << ' ';
    if(BMI < 18.5)
        cout << "underweight" << endl;
    else if(BMI < 24)
        cout << "normal" << endl;
    else if(BMI < 27)
        cout << "overweight" << endl;
    else if(BMI < 30)
        cout << "mild obesity" << endl;
    else if(BMI < 35)
        cout << "moderate obesity" << endl;
    else
        cout << "severe obesity" << endl;
}
