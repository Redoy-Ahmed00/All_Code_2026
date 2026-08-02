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
    ll n, x;
    cin >> n >> x;

    ll mx = 0, sum = 0;

    rep(i,0,n)
    {
        ll a;
        cin >> a;
        sum += a;
        mx += (a+x-1)/x;
    }

    cout<< (sum+x-1)/x << ' '  << mx << nl;
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