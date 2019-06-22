#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int num[10000], diff[10000], ar[10000];
    int ncase,N,i,j;

    cin >> N;
    {
        int flag = 0;
        for(i = 0 ; i < N ; i ++)
            cin >> num[i];
        for(i = 0 ; i < (N - 1) ; i ++)
            diff[i] = abs(num[i] - num[i + 1]);
        //for(i = 0 ; i < (N - 1) ; i ++)
            //cout << "diff[" << i << "]= " << diff[i] << endl;
        for(i = 1 ; i <= (N - 1) ; i ++)
        {
            if(diff[i-1] == i)
                continue;
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            flag = 0;
            for(i = N-1, j = 0 ; i >= 1 ; i --, j ++)
            {
                if(diff[j] == i)
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
}
