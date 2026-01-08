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
    ll n, t;
    cin >> n >> t;

    vll v(n+1);

    rep(i,0,n)
        cin >> v[i];
    ll r = 0, passed = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        while(r < n && passed + v[r] <= t)
        {
            passed += v[i];
            ++r;
        }
        ans = max(ans, r-i);
        passed -= v[i];
    }

    cout << ans << endl;
}

int main ()
{
    optimize();
              
    int t = 1;
    //cin >> t;

    while(t--)
        solve();
        
    return 0;
}