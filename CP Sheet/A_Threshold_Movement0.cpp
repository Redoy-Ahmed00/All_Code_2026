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
    ll n;
    cin >> n;
    vll v(n);
    set<ll> s;

    rep(i,0,n)
    {
        cin >> v[i];
        s.insert(v[i]);
    }

    if(n%2)
    {
        cout << "NO" << nl;
        return;
    }

    for(ll i = 0; i <= n-2; i += 2)
    {
        if(v[i] <= v[i+1])
        {
            cout << "NO" << nl;
            return;
        }
        else
        {
            ll mid = (v[i] + v[i+1])/2;
            if(s.find(mid) != s.end())
            {
                cout << "NO" << nl;
                return;
            }

        }
    }
    cout << "YES" << nl;
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