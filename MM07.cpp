#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int i,count,input1,input2,temp1,temp2;
        cin >> input1 >> input2;
        count = 0;
        for( ; input2 != 0; )
        {
            temp1 = input1;
            temp2 = input2;
            for( ; input1 != 0 ; )
            {
                if(((temp1 % 10) == (temp2 % 10)) && (0 < temp1) && (9 >= temp1))//temp1 = 0~9
                {
                    count ++;
                    break;
                }
                else if((temp1 % 10) != (temp2 % 10))//not the same
                {
                    break;
                }
                else
                {
                    temp1 = temp1 / 10;
                    temp2 = temp2 / 10;
                }
            }
            input2 = input2 / 10;
        }
        cout << count << endl;
}
