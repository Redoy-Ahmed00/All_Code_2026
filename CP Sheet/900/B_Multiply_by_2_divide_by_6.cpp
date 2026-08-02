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
    ll x;
    cin >> x;

    ll cnt2 = 0, cnt3 = 0;

    while(x%2==0)
    {
        x /= 2;
        cnt2++;
    };

    while(x%3==0)
    {
        x /= 3;
        cnt3++;
    }

    if(x == 1  && cnt2<= cnt3)
        cout << 2*cnt3 - cnt2 << nl;
    else
        cout << -1 << nl;

    
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