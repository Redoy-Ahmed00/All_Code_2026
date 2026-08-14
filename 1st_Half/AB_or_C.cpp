#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)
#define f first
#define s second

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll,ll>> v;
    rep(i,0,n)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        v.push_back({a,i});
        v.push_back({b,i});
        v.push_back({c,i});        
    }

    sort(v.begin(),v.end());
    map<ll,ll> mp;
    ll l = 0, r = 0, unq = 0, ans = LLONG_MAX;

    rep(r,0,3*n)
    {
        if(mp[v[r].s] == 0)
        {
            unq++;
        }
        mp[v[r].s]++;

        while(unq==n)
        {
            ans = min(ans, (v[r].f - v[l].f));
            mp[v[l].s]--;
            if(mp[v[l].s] == 0)
                unq--;
            l++;
        }
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