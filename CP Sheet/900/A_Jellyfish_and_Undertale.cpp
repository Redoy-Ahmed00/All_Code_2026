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
    ll a, b, n;
    cin >> a >> b >> n ;
    vll v(n);
    rep(i,0,n)
    {
        cin >> v[i];
        if(v[i] >= a)   
            v[i] = a-1;
    }
    ll mx = accumulate(v.begin(),v.end(), 0ll);

    cout << mx +b << nl; 
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