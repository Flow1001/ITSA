#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int compare(const void *a,const void *b)
{
    return (*((int*)a)-*((int*)b));
}
int main(void)
{
    int i,j,place,time,alltime=0,t[1001];
    cin >> place;
    for(i = 0 ; i < place ; i ++)
        cin >> t[i];
    qsort(t,place,sizeof(int),compare);
    for(i = 0 ; i < place ; i ++)
    {
        time = 0;
        for(j = 0 ; j <= i ; j ++)
            time = time + t[j];
        time = (2 * time) - t[j-1];
        alltime = alltime + time;
    }
    cout << alltime << endl;
    alltime = 0;
}
