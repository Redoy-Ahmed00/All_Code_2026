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

    int mn = INT_MAX, mx = INT_MIN;
    int cnt = 0;
    vi v(n);
    rep(i,0,n)
    {
        cin >> v[i];
        mn = min(mn,v[i]);
        mx = max(mx, v[i]);
    }

    rep(i,0,n)
    {
        if(mn==v[i] || mx == v[i])
            cnt++;
    }

    cout << n-cnt << endl;
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