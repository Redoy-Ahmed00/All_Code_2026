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
    int n, rem, sum = 0;
    cin >> n;
    vi v(n);

    rep(i,0,n)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(),v.end());
    

    rem = n;
    
    for(int i = 0; i < n; i++)
    {
        if(v[i]*rem<sum)
        {
            sum -= v[i];
            --rem;
        }
        if (rem == 1) break;
    }
    
    cout << rem << nl;
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