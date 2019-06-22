#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int i,j,ncase,a[1001];
    int n,m,k, number;
    for(cin >> ncase ; ncase > 0 ; ncase --)
    {
        number = 0;
        cin >> n >> m >> k;
        for(i = 0 ; i < n ; i++)
            cin >> a[i];
        for(i = 0 ; i < n ; i ++)
		{
            for(j = (i + 1) ; j < n ; j ++)
            {
                if((a[i] + a[j]) == k)
                {
                    number ++;
                    a[i] = a[j] = 999;
                }
            }
		}
        cout << number << endl;
    }
}
