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
    int n;
    cin >> n;
    vi v(n+1);
    rep(i,1,n+1)
        cin >> v[i];
    rep(i,2,n)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])
        {
            cout << "YES" << nl;
            cout << i-1 << ' '<< i << ' '<<i+1 << nl;
            return;
        }
    }
    cout << "NO" << nl;
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