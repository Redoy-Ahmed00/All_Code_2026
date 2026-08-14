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
    int n, m;
    cin >> n >> m;
    vll v(n);
    vi q(m);
    rep(i,0,n)
        cin >> v[i];
    rep(i,0,m)
        cin >> q[i];

    int mn = 31;

    rep(j,0,m)
    {
        if(q[j]<mn)
        {
            ll x = (1ll << q[j]);
            rep(i,0,n)
            {
                if(v[i]%x==0)
                {
                    v[i] = v[i]+x/2;
                }
            }
            mn = q[j];

        }
    }
    for(auto x:v)
        cout << x << ' ';
    cout << nl;
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