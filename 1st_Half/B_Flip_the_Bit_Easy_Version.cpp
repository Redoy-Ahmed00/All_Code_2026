#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)

typedef long long ll;
typedef vector <int> vi;
typedef vector <bool> vb;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    int n, k;
    cin >> n >> k;

    vi v(n);
    rep(i,0,n)
        cin >> v[i];

    int idx;
    cin >> idx;
    idx = idx - 1;
    
    int l = idx-1, r = idx+1, ops = 0;
    int flip = v[idx];

    while(l >= 0 || r < n)
    {
        while(l>=0 && v[l] == flip)
            l--;
        while(r<= n-1 && v[r] == flip)
            r++;
        
        if((l >= 0 && v[l] == !flip) || (r < n && v[r] == !flip))
        {
            ops++;
            flip ^= 1;
        }         
    }

    ops = (ops%2) ? ops+1 : ops;
    cout << ops << endl;




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