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

    ll mx = LLONG_MIN, mn = LLONG_MAX;

    rep(i,0,n)
    {
        ll a;
        cin >> a;
        if(i%2==0)
            mn = min(mn,a);
        else
            mx = max(mx,a);
    }
    if(n%2==1)
    {
        cout << "NO" << nl;
        return;
    }

    if(mn-mx > 1)
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