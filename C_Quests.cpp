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
    int n, k;
    cin >> n >> k;

    vi v1(n+1), v2(n+1);
    priority_queue<int> pq;

    rep(i,1,n+1)
        cin >> v1[i];
    rep(i,1,n+1)
        cin >> v2[i];
    
    int r = min(n,k), vadd = 0, mx = -1;

    rep(i,1,r+1)
    {
        vadd += v1[i];
        pq.push(v2[i]);

        mx = max(mx, vadd+pq.top()*(k-i));
    }

    cout << mx << endl;
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