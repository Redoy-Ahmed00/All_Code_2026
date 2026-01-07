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
    int n, ts = 0, s = 0;
    cin >> n;

    vi a(n);

    rep(i,0,n)
    {
        cin >> a[i];
        ts += a[i];
    }
    sort(a.rbegin(),a.rend());

    int cnt = 0;
    rep(i,0,n)
    {
        cnt++;
        ts -= a[i];
        s += a[i];
        if(s > ts)
            break;
    }

    cout << cnt << endl;
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