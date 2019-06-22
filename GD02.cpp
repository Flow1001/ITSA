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
    int ncase,stu_num,item_num,i,j,award;
    int stu[10001], item[10001];
    cin >> ncase;
    for( ; ncase > 0 ; ncase --)
    {
        cin >> item_num >> stu_num;
        for(i = 0 ; i < item_num ; i ++)
            cin >> item[i];

        for(i = 0; i < stu_num ; i ++)
            cin >> stu[i];

        qsort(item,item_num,sizeof(int),compare);
        qsort(stu,stu_num,sizeof(int),compare);
        i = 0;
        j = 0;
        award = 0;
        for( ; j < stu_num ; )
        {
            for( ; stu[j] < item[i] ; )
                j ++;
            if ((j == stu_num) || (i == item_num))
                break;
            award = award + stu[j];
            j ++;
            i ++;
        }
        if(i != item_num)
            award = -1;
        cout << award << endl;
    }
}
