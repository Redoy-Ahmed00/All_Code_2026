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
    int ops = 0, op = 0;
    rep(i,0,n)
       cin >> v[i];
      
    
    rep(i,0,n)
    {
        if(i%2 != v[i]%2)
            ops++;
        if(i%2 == v[i]%2)
            op++;
        
    }
    
    cout << min(ops,op) << nl;
    
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