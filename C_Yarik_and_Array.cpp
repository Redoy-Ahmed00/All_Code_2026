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
    int n;cin >> n;
    vi v(n);
    rep(i,0,n)
        cin >> v[i];

    int sum = v[0], ans = v[0];
    rep(i,1,n)
    {
        if((abs(v[i]) % 2 == abs(v[i-1]) % 2))
        {
            sum = v[i];
        }
        else
            sum += v[i];
        
        if(v[i] > sum)
        {
            sum = v[i];
        }
        
        
        ans = max(ans, sum);
    }
    cout << ans << nl;
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