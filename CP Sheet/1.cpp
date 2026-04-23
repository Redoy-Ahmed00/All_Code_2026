#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    ll n, tar;
    cin >> n;

    vll a(n);

    for(ll i = 0; i < n; i++)
        cin >> a[i];
    cin >> tar;

    bool f = false;

    for(ll i = 0; i < n; i++)
        if(a[i] == tar)
        {
            cout << i << endl;
            f = true;
            return;
        }
    if(f)
        cout << -1 << endl;

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