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
    ll n , q;
    cin >> n >> q;

    vll main(n+2, 0), diff(n+2, 0), pre(n+2,0);

    rep(i,1,n+1)
        cin >> main[i];
    
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r+1] -= 1;
    }

    for(int i = 1; i <= n; i++)
    {
        pre[i] = pre[i-1] + diff[i];
    }

    sort(main.begin(), main.end());
    sort(pre.begin(), pre.end());
    ll ans = 0;
    for(int i = 0; i <= n+1; i++)
    {
        ans += main[i]*pre[i];
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