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

    vi a(n);

    rep(i,0,n)
        cin >> a[i];
    bool flag = true;
    int mn = a[0], mx = a[0];

    rep(i,0,n)
    {
        if(a[i] > mn && a[i] < mx)
        {
            flag = false;
            break;
        }
        mn = min(a[i], mn);
        mx = max(mx, a[i]);
        
    }

    if(flag)
        cout << "YES" << nl;
    else
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