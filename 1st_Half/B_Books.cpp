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

    vll v(n);

    rep(i,0,n)
        cin >> v[i];

    ll s = 0, l = 0, ans = 0;
    rep(i,0,n)
    {
        s+= v[i];
        while(s > t)
        {
            s -= v[l];
            l++;
        }
        ans = max(ans, i-l+1);
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