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
    ll x, n;
    cin >> x >> n; 

    ll rem = n%4;
    ll st = 4*(n/4)+1;

    for(ll i = st; i <= n; i++)
    {
        if(x%2==0)
            x-=i;
        else
            x+=i;
    }

    cout << x << nl;
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