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
    int n, mi = 0;
    cin >> n;
    vi v(n);
    rep(i,0,n)
        cin >> v[i];
        
    int ans = INT_MIN;
    rep(i,0,n)
    {
        ans = max(ans, v[(i-1+n)%n] - v[i]);
    }
    rep(i,0,n)
    {
        ans = max(ans, v[i] - v[0]);
    }
    rep(i,0,n)
    {
        ans = max(ans, v[n-1] - v[i]);
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