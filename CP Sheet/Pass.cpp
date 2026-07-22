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
    vi v(5);
    rep(i,0,5)
        cin >> v[i];
    int tp = 0, sp = 0;
    rep(i,0,5)
    {
        if(v[i]>=30)
            tp++;
        if(v[i]>=60)
            sp++;
    }
    if(tp >= 4 && sp >= 2)
        cout << "Pass" << nl;
    else
        cout << "Fail" << nl;
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