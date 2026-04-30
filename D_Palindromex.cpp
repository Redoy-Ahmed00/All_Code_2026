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

    vi v(2*n);
    vector<pair<int,int>> pos(n,{-1,-1});
    vi mx;

    rep(i,0,2*n)
    {
        cin >> v[i];
        if(pos[v[i]].first==-1)
            pos[v[i]].first = i;
        else
            pos[v[i]].second = i;
    }

    for(auto [x,y] : pos)
    {
        set<int> s;
        while(x<=y)
        {
            if(v[x]!=v[y])
                break;
            else
                s.insert(v[x]);
            x++;
            y--;
        }
        int mex = 0;
        for(int x : s)
            if(x==mex)
                mex++;
        mx.push_back(mex);
    }
    int ans = mx[0];
    for(int x : mx)
        ans = max(x,ans);
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