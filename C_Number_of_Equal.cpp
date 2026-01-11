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
    ll n, m;
    cin >> n >> m;

    vll a(n), b(m);

    rep(i,0,n)
        cin >> a[i];
    rep(i,0,m)
        cin >> b[i];

    ll l = 0, r = 0,ans = 0;;
    
    while(l < n && r < m)
    {
        ll cur = a[l], cnt1 = 0, cnt2 = 0;

        while(l < n && a[l] == cur)
        {
            cnt1++;
            l++;
        }

        while(r < m && cur > b[r])
            r++;
        
        while(r < m && b[r] == cur)
        {
            cnt2++;
            r++;
        }

        ans += (cnt1*cnt2);

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