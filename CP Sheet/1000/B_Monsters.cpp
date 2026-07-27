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
    priority_queue<pair<ll,ll>> pq;

    for(ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        ll rem = a%k;
        rem = (rem == 0) ? k : rem;
        pq.push({rem,-i});
    }

    while(!pq.empty())
    {
        auto [x,y] = pq.top();
        pq.pop();
        cout << -y << ' ';
    }
    cout << nl;
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