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
    ll n, m, si, sj;
    cin >> n >> m >> si  >> sj;
    
    // vector<pair<ll,ll>> v = {{1,1}, {1,m}, {n,1}, {n,m}};
    // ll mx1 = LLONG_MIN, mx2 = LLONG_MIN,mi1 = -1,mi2 = -1;
    // for(int i = 0; i < 4; i++)
    // {
    //     auto[x,y] = v[i];
    //     ll dis = abs(x-si)+abs(y-sj);
        
    //     if(dis>mx1)
    //     {
    //         mx2 = mx1;
    //         mi2 = mi1;
    //         mx1  = dis;
    //         mi1  = i;
    //     }
    //     else if(dis > mx2)
    //     {
    //         mx2 = dis;
    //         mi2 = i;
    //     }
    // }

    // cout << v[mi1].first << ' ' << v[mi1].second << ' ';
    // cout << v[mi2].first << ' ' << v[mi2].second << nl;

    cout<<1<<' '<<1<<' '<<n<<' '<<m<<nl;
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