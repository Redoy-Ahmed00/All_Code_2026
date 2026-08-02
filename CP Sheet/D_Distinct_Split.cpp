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

    string s;
    cin >> s;

    set<int> t;
    vi v1(n,0), v2(n,0);

    rep(i,0,n)
    {
        t.insert(s[i]);
        v1[i] += t.size();
    }
    t.clear();

    for(int i = n-1; i >= 0; i--)
    {
        t.insert(s[i]);
        v2[i] += t.size();
    }

    int ans = INT_MIN;

    rep(i,0,n-1)
    {
        ans = max(ans, v1[i]+v2[i+1]);
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