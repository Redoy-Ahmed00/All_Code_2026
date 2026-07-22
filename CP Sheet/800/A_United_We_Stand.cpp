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

    int mn = *(min_element(v.begin(), v.end()));
    vi c, b;
    int i = 0;
    
    for(auto x : v)
    {
        if(x == mn)
            b.push_back(x);
        else
            c.push_back(x);
    }

    if(c.empty() || b.empty())
        cout << -1 << nl;
    else
    {
        cout << b.size() << ' ' << c.size() << nl;
        for(auto x : b)
            cout << x << ' ';
        cout << nl;
        for(auto x : c)
            cout << x << ' ';
        cout << nl;
        
    }
       
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