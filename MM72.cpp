#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
int main(void)
{
    int id, unit;
    float cost;
    cin >> id >> unit >> cost;
    cout << id << ' ' << unit << ' ' << cost << ' ' << fixed << setprecision(2) << (unit * cost) << ' ' <<  fixed << setprecision(2) <<((unit * cost)*0.12) << endl;
}
