#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{

    int N,n;
    int i,j,k,t;
    char input[1000],copyinput[1000];
        cin.getline(input,999);
        int flag = 1;//if flag == 1 than is palindrome
        int length = strlen(input);
        strcpy(copyinput,input);
        for(i = 0 , j = length-1 ; i <= length ; i ++ , j --)
        {
            if(input[i] != copyinput[j])
            {
                cout << "no" << endl;
                break;
            }
            if((i == length) && (copyinput[j] == input[i]))
               {
                   cout << "yes" << endl;
                   break;
               }
        }
}
