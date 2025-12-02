#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int ecnt = 0, ocnt = 0;

        for (int i = 0; i < n; i++)
        {
           if (a[i] % 2 == 0)
           {
               ecnt++;
           }
           else if ( a[i]% 2 != 0)
           {
              ocnt++;
           }
        }

        if(ocnt == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }

    }

    return 0;
}
