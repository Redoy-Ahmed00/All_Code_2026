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
    int n, k;
    cin >> n >> k;

    vi v(n);

    rep(i,0,n)
        cin >> v[i];

    int l = 1, r = 1e4, ans = 0;

    while(l<=r)
    {
        int mid = (l+r)/2;
        int add = 0;
        rep(i,0,n)
            add += v[i]/mid;
        
        if(add >= k)
        {
            ans = max(ans, mid);
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    cout << ans << endl;
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