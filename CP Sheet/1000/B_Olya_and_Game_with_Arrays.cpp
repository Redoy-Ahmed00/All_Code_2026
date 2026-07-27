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

    vector<pair<ll,ll>> v(n);
    ll second_sum = 0;
    ll first_min = LLONG_MAX;
    rep(i,0,n)
    {
        ll m;
        cin >> m;

        priority_queue<ll,vll,greater<ll>> pq;
        while(m--)
        {
            ll a;
            cin >> a;
            pq.push(a);
        }
        ll x = pq.top(); pq.pop();
        ll y = pq.top(); pq.pop();

        v[i] = {x,y};
        second_sum += y;
        first_min = min(first_min, x);


        ll x = LLONG_MAX, y = LLONG_MAX-1;

        // while (m--)
        // {
        //     ll a;
        //     cin >> a;

        //     if (a < x) 
        //     {
        //         y = x;
        //         x = a;
        //     }
        //     else if (a < y)
        //     {
        //         y = a;
        //     }
        // }

    }

    ll ans = LLONG_MIN;

    for(auto[x,y] : v)
    {
        ans = max(ans, (second_sum+first_min-y));
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