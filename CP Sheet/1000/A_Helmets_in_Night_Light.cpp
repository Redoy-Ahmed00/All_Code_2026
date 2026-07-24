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
    ll n, p;
    cin >> n >> p;

    vll a(n), b(n);

    rep(i,0,n)
        cin >> a[i];
    rep(i,0,n)
        cin >> b[i];
    
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    queue<pair<ll,ll>> q;
    ll cost = 0;

    for(ll i = 0; i < n; i++)
    {
        pq.push({b[i], a[i]});
    }

    q.push(pq.top());
    pq.pop();   
    cost+=p;


    while(!pq.empty())
    {
        auto[ct, rem] = q.front();
        q.pop();
        if(ct > p)
        {
            cost += p * pq.size();
            break;
        }
        while(rem--)
        {
            if(!pq.empty())
            {
                q.push(pq.top());
                pq.pop();
                cost += ct;
            }
            else
                break;
        }
    }
    cout << cost  << nl;
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