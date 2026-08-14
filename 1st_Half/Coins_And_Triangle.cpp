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
    
    ll l = 1, r = n, mx = 1;
    
    while(l <= r)
    {
        ll mid = (l+r)/2;
        if((mid*(mid+1))/2 <= n)
        {
            mx = max(mx, mid);
            l = mid+1;
        }
        else
            r = mid-1;
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