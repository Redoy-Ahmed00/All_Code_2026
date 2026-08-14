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

    int mn = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        int need = (k - (v[i] % k)) % k;
        mn = min(mn, need);
    }

    if(k == 4)
    {
        int even = 0;
        for(int x : v)
            if(x % 2 == 0) even++;

        int need_even = max(0, 2 - even);

        mn = min(mn, need_even);
    }

    cout << mn << endl;
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