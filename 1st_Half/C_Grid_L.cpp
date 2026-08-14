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
    ll p, q;;
    cin >> p >> q;

    ll mxn = sqrt(p+q);

    rep(n,1,mxn+1)
    {
        ll m = (p+2*q-n)/(2*n+1);
        if((p+2*q-n)%(2*n+1))
            continue;
        if(p<(m-n))
            continue;
        cout << n << ' ' << m << endl;
        return;
    }
    cout << -1 << endl;
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