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

    vi v(n+1);
    map<int,int> mp;

    rep(i,1,n+1)
    {
        cin >> v[i];
        int diff = v[i]-i;
        mp[diff]++;
    }
    int ans = 0;
    for(auto[x,y] : mp)
    {
        ans += (y*(y-1))/2;
    }

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