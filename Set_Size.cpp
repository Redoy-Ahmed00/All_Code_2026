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
    ll n,q;
    cin >> n >> q;

    vll v(n);
    rep(i,0,n)
        cin >> v[i];
    sort(v.begin(), v.end());

    if(n==1)
    {
        while(q--)
        {
            ll x;
            cin >> x;
            cout << x << endl;
        }
        return;
    }

    vll diff(n-1);
    rep(i,1,n)
        diff[i-1] = v[i]-v[i-1];
    sort(diff.begin(), diff.end());
    vll ps(n-1,0);
    ps[0] = diff[0];
    rep(i,1,n-1)
    {
        ps[i] = ps[i-1]+diff[i];
    }

    while(q--)
    {
        ll x;
        cin >> x;

        

        auto it = upper_bound(diff.begin(),diff.end(), x);
        ll idx = it- diff.begin() - 1;
        ll total = 0;
        if(idx>=0)
            total = x*(idx+1) - ps[idx];

        cout << ((n*x) - total) << endl;
    }
     
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