#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    getline(cin,str1);
    stringstream ss(str1);
    string word;
    string ser = "Jessica";
    int flag =0;
    while (ss >> word)
    {
        if(word == ser)
        {
            flag = 1;
            break;
        }
        
    }
    if(flag)
    {
        cout <<"YES" <<endl;
    }
    else
    {
        cout <<"NO" <<endl;

    }

    

    return 0;
}

