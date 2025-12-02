#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string l;
    cin >> l;
    int total =0;
    stringstream ss(s);
    string word;
    while (ss >> word)

    {
        if(word == l)
        {
            total++;
        }
    }
    cout << total << endl;
    
    return 0;
}

