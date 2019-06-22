#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int ncase,number,input[200],count;
    int n,i,j,k;
    cin >> ncase;
    for(n = 0 ; n < ncase ; n ++)
    {
        count = 0;
        cin >> number;
        for(i = 0 ; i < number ; i ++)
            cin >> input[i];
        for(i = 0 ; i < number ; i ++)
        {
            for(j = i+1 ; j < number ; j ++)
            {
                if(input[i] > input[j])
                    count ++;
            }
        }
        cout << count << endl;
    }
}
