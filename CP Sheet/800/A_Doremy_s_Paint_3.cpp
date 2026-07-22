#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mp[x]++;
    }

    if(mp.size() >= 3)
        cout << "No"<< endl;
    else
    {
        if(abs(mp.begin()->second - mp.rbegin()->second) <= 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    
}

int main ()
{
    optimize();
              
    int t = 1;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}