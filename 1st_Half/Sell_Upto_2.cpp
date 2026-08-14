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
    priority_queue<ll> pq;
    int n;
    cin >> n;
    vll v(n);
    rep(i,0,n)
    {
        cin >> v[i];
    }
    ll cost = 0;

    rrep(i,n-1,0)
    {
        pq.push(v[i]);
        pq.push(v[i]);
        if (!pq.empty())
        {
            cost += pq.top();
            pq.pop();
        }
    }
    
    cout << cost << endl;
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