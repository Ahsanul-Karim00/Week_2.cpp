#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string tar = "EGYPT";

    while (true)
    {
        int idx = s.find(tar);
        if(idx !=-1)
        {
            s.replace(idx,5," ");
        }
        else
        {
            break;

        }
    }
    cout <<s<<endl;
    return 0;
}
