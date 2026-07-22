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
    vi v(n);

    rep(i,0,n)
        cin >> v[i];
    vi ans;

    ans.push_back(v[0]);

    rep(i,1,n)
    {
        if(v[i-1] > v[i])
            ans.push_back(1);
        ans.push_back(v[i]);
    }

    cout << ans.size() << nl;
    for(int x: ans)
        cout << x << ' ';
    cout << nl;
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