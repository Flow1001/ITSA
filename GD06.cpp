#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int ncase,work_num,machine,i;
        cin >> work_num >> machine;
        long long mac[200000] = {0},work[200000] = {0};
        long long t = 0,j = 0;
        for(i = 0 ; i < work_num ; i ++)
            cin >> work[i];
        for( ; ; )
        {
            int flag = 1;
            for(i = 0; i < machine ; i ++)
            {
                if((mac[i] == 0) && (j != work_num))
                    mac[i] = work[j++];
                mac[i] --;
            }
            for(i = 0 ; i < machine ; i ++)
                if(mac[i] > 0)
                    flag = 0;
            t ++;
            if((flag == 1) && (j == work_num))
                break;
        }
        cout << t << endl;
}
