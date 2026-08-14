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

    vll v(n+1);
    rep(i,1,n+1)
        cin >> v[i];
    
    ll cur = 1, mx = 1;
    rep(i,2,n+1)
    {
        if(v[i-1] == v[i])
            cur++;
        else
            cur=1;
        
        mx = max(mx,cur);
    }

    if(mx >= m)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

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