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
    vi v(7);
    int add = 0;
    rep(i,0,7)
    {
        cin >> v[i];
        add += (v[i]*-1);
    }

    int mx = INT_MIN;

    rep(i,0,7)
    {
        mx = max(mx, add+(2*v[i]));
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