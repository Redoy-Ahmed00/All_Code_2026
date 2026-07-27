#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    map <char, int> mp;

    for(auto x : t)
        mp[x]++;

    for(int i = n-1; i >= 0; i--)
    {
        if(mp[s[i]]>0)
            mp[s[i]]--;
        else
            s[i] = '.';
    }
    string ans = "";

    for(auto x : s)
        if(x != '.')
            ans.push_back(x);
    
    if(ans == t)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    
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