#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
typedef long long ll;

ll ps(ll n)
{
    ll s = n/2;
    if(n%2 == 0)
            return (s * (s+1));
        else
            return  (s*(s+1)) + (s+1);
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    while (q--)
    {
        ll l, r, fv, lv;
        cin >> l >> r;

        fv = ps(l-1);
        lv = ps(r);

        cout << lv-fv << endl;
        
    }
}

int main() {
    optimize();
    int t = 1;
    //cin >> t;
    while (t--) 
        solve();
    return 0;
}
