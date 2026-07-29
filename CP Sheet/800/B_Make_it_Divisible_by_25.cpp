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

int cnt_ops(string s,string t, int n)
{
    char f = s[0];
    char ss = s[1];

    bool fs = false, ff = false;

    int i = n-1, ops = 0;
    for(;i>=0; i--)
    {
        if(t[i] == ss)
        {
            fs = true;
            i--;
            break;
        }
        else
            ops++;
    }
    for(;i>=0; i--)
    {
        if(t[i] == f)
        {
            ff = true;
            break;
        }
        else
            ops++;
    }

    if(ff && fs)
        return ops;
    else
        return INT_MAX;

}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<string> t = {"00","25","50","75"};

    int ans = INT_MAX;
    for(auto x : t)
    {
        ans = min(ans, cnt_ops(x, s, n));
    }

    cout << ans << nl;
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