#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    op();
    map<string, bool> m;
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>> s;

        if(m[s]==1) cout<< "YES"<<endl;
        else cout<< "NO"<<endl;

        m[s] = 1;
    }
    return 0;
}




