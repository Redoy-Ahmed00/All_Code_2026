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
    int n, h;
    cin >> n >> h;

    vi v(n);

    rep(i,0,n)
        cin >> v[i];

    sort(v.rbegin(), v.rend());

    int ans = 0, k = 0;
    rep(i,0,n)
    {
        ans += v[i];

        if(ans >= h)
        {
            k = v[i];
            break;
        }
    }

    cout << k << endl;
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