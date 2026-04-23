#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    ll minsum = (k*(k+1)) / 2;
    ll maxsum = ( n*(n+1) - (n-k)*(n-k+1) ) / 2;

    if(x >= minsum && x <= maxsum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
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