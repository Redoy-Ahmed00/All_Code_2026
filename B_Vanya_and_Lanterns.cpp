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
    double n, l;
    cin >> n >> l;

    vd v(n);
    rep(i,0,n)
        cin >> v[i];
    sort(v.begin(),v.end());

    double mxd = 0.0;

    rep(i,0,n-1)
        mxd = max(mxd, (v[i+1] - v[i]) );

    cout << fixed << setprecision(10) << max(mxd/2, max(v[0]-0, l-v[n-1])) << endl;
}

int main ()
{
    optimize();
              
    int t = 1;
    //cin >> t;

    while(t--)
        solve();
        
    return 0;
}