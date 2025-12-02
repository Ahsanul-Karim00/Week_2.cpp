#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, l;
        cin >> s >> l;

        int idx = s.find(l);
        while (idx != -1)
        {
            s.replace(idx, l.size(), "#");
            idx = s.find(l,idx+1);
        }
        cout << s <<endl;
    }

    return 0;
}
