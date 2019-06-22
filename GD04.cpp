#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int t[101],d[101],ncase,all_time,num,i,j,flag;
    cin >> ncase;
    for( ; ncase > 0 ; ncase --)
    {
        flag = 1;
        cin >> num;
        for(i = 0 ; i < num ; i ++)
            cin >> t[i];

        for(i = 0 ; i < num ; i ++)
            cin >> d[i];

        for(i = 0 ; i < num ; i ++)
        {
            for(j = 0 ; j < (num - i -1) ; j ++)
            {
                if(d[j] > d[j+1])
                {
                    swap(&d[j],&d[j+1]);
                    swap(&t[j],&t[j+1]);
                }
            }
        }

        all_time = 0;
        for(i = 0 ; i < num ; i ++)
        {
            all_time = all_time + t[i];
            if(all_time > d[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}
