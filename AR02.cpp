#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int ncase,a,b,c,d;
    int ar1[1000], ar2[1000], sum[1000];
    int i,j,k;
    cin >> a >> b >> c >> d;
    ar1[2] = ar2[2] = a;
    ar1[1] = ar2[1] = b;
    ar1[0] = ar2[0] = c;
    if(d > 1)
    {
        for(k = 1 ; k < d ; k ++)
        {
            for(i = 0 ; i <= 20 ; i ++)//return zero
                sum[i] = 0;
            for(i = 0 ; i <= (2 * k) ; i ++)//max coefficient has 2k+1
                for(j = 0 ; j < 3 ; j ++)//there is 3 coefficient
                    sum[i+j] = sum[i+j] + (ar1[i] * ar2[j]);
            for(i = 0 ; i <= 20 ; i ++)
                ar1[i] = sum[i];
        }
        for(i = (2 * d) ; i >= 0 ; i --)
        {
            if(i > 0)
                cout << sum[i] << ' ';
            else
                cout << sum[i];
        }
        cout << endl;
    }
    else
        cout << a << ' ' << b << ' ' << c << endl;
}
