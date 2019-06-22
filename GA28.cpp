#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    int ncase, note, dis[10010], note2[10010], down[10010];
    int i, sum;
    cin >> ncase;
    for( ; ncase > 0 ; ncase --)
    {
        cin >> note;
        for(i = 0 ; i <= note ; i ++)
            down[i] = dis[i] = 0;
        sum = 0;
        for(i = 2 ; i <= note ; i ++)
            cin >> note2[i];

        for(i = 2 ; i <= note ; i ++)
            cin >> dis[i];
        for(i = note ; i >= 1 ; i --)
            down[note2[i]] = down[note2[i]] + down[i] + 1;

        for(i = 2 ; i <= note ; i ++)
            sum = sum + (down[i] + 1) * (note - down[i] - 1) * dis[i] * 2;

        cout << sum << endl;
    }

    return 0;
}
