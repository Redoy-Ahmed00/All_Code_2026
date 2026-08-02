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
    ll n, k;
    cin >> n >> k;
    ll z = n*k+1;
    vll v(z+1);
    rep(i,1,z)
        cin >> v[i];
    
    ll x = (n+1)/2 - 1;
    x = n-x;

    ll ans = 0;
    while(k--)
    {
        z-=x;
        if(z<=0)    break;
        ans+= v[z];
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