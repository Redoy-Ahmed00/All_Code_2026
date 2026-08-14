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

    int a[n];
    int ec = 0, oc = 0;
    rep(i,0,n)
    {
        cin >> a[i];
        if(a[i]%2==0)
            ec++;
        else 
            oc++;
    }

    if(ec==1)
    {
        int ans;
        rep(i,0,n)
            if(a[i]%2==0)
                ans = i+1;
        cout << ans << endl;
    }
    else
    {
        int ans;
        rep(i,0,n)
            if(a[i]%2==1)
                ans = i+1;
        cout << ans << endl;
    }
}

int main ()
{
    optimize();
              
    int t = 1;
    //cin >> t;

    while(t--)
        solve();
        
    return 0;
}