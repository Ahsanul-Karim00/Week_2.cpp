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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[k])
            {
                cout << i <<endl;
                break;
            }
        }
    }

    return 0;
}
