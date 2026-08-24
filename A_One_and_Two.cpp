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
    int tc = 0;
    rep(i,0,n)
    {
        cin >> v[i];
        if(v[i]==2)
            tc++;
    }
    if(tc%2==1)
        cout << -1 << nl;
    else
    {
        tc /= 2;
        rep(i,0,n)
        {
            if(v[i]==2)
                tc--;
            if(tc == 0)
            {
                cout << i+1 << nl;
                return;
            }
        }
        
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