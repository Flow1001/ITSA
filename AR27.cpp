#define Max 800000
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int len, i = 1, count = 0, temp;
    int num[Max] = {0}, ans[Max] = {0};
    char line[Max] = {'\0'};
    char *token;

    cin.getline(line,Max);
    len = atoi(line);
    cin.getline(line,Max);
    line[strlen(line)-1] = '\0';
    token = strtok(line," ");
    while(token != NULL)
    {
        temp = atoi(token);
        num[temp] = 1;//student is at class
        token = strtok(NULL," ");
    }
    for(i = 1, count = 0 ; i <= len ; i++)
    {
        if(num[i] == 0)
        {
            ans[count] = i;
            count ++;
        }
    }
    for(i = 0 ; i < count ; i++)
    {
        if(i == count - 1)
        {
            cout << ans[i] << endl;
            break;
        }
        cout << ans[i] << ' ' ;
    }
    return 0;
}
