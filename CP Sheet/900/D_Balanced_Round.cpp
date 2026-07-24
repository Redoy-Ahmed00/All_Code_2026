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
    vll v(n);
    rep(i,0,n)  
        cin >> v[i];
    sort(v.begin(),v.end());

    ll mxs = 1, s = 1;
    
    for(int i = 1; i < n; i++)
    {
        if(v[i]-v[i-1] > k)
        {
            s = 1;
        }
        else
            s++;
        mxs = max(mxs,s);
    }
    cout << n - mxs << nl;
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