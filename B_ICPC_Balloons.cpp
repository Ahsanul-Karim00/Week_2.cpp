#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        string s;
        cin >>s;

        int ferq[26] = {};
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            ferq[c-'A']++;
            if(ferq[c-'A'] > 1)
            {
                res++;
            }
            else
            {
                res +=2;
            }
        }
        cout << res <<endl;
        
    }
    
    return 0;
}

