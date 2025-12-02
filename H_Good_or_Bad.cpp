#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        bool good = true;
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                good = false;
                break;
            }
        }
        if(good == true)
        {
            cout << "Good"<< endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
        
    }
    
    return 0;
}
