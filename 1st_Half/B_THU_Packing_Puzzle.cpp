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
    ll t, h, u,ans = 0;
    cin >> t >> h >> u;

    ll tmp = min(t,u);
    ans += tmp*4LL;
    t-=tmp,u-=tmp;

    if(u)
    {
        ans += (u+h)*3LL;
        cout << ans << endl;
        return;
    }
   
    tmp = min(t/2, h);
    ans += tmp*7LL;
    t-=tmp*2, h-=tmp;

    if(t&&h)
    {
        ans += 5LL + (h-1)*3LL;
    }
    else if(t)
    {
        ans += (2*t+1)*1LL;
    }
    else if(h)
        ans += h*3LL;
    
    cout << ans << endl;
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