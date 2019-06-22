#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int cmp(const void *a , const void *b)
{
		return (*((int*)a)-*((int*)b));
}
int main(void)
{
    int ncase,machine,work_num,work[3001],mac[11],i,j;
        cin >> work_num >> machine;
        for(i = 0 ; i < machine ; i ++)
            mac[i] = 0;
        for(i = 0 ; i < work_num ; i ++)
            cin >> work[i];
        for(i = 0; i < work_num ; i ++)
        {
            mac[0] = mac[0] + work[i];
            qsort(mac, machine, sizeof(int), cmp);
        }
            cout << mac[machine - 1] << endl;
}
