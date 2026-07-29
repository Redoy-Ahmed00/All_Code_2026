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
    ll a, b, c;
    cin >> a >> b >> c;

    if((2*b-c)%a==0 && (2*b-c)/a > 0)
    {
        cout << "YES" << nl;
        return;
    }
    if((c+a)%(2*b)==0 && (c+a)/(2*b) > 0)
    {
        cout << "YES" << nl;
        return;
    }
    if((2*b-a)%c==0 && (2*b-a)/c > 0)
    {
        cout << "YES" << nl;
        return;
    }
    cout << "NO" << nl;

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