#include <stdio.h>
#include <iostream>

using namespace std;
int main(void)
{
    int m,n,i,j, temp;
    int boy, girl;
        cin >> m >> n;
        boy = 0;
        girl = 0;
        m = m * n;
        for(i = 0 ; i < m ; i ++)
        {
            cin >> temp;
            if(temp == 0)
                girl ++;
            else
                boy ++;
        }
        if(boy > girl)
            cout << '1' << endl;
        else if(boy < girl)
            cout << '0' << endl;
        else
            cout << '2' << endl;
}
