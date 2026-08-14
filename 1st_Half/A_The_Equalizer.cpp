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
    int add = 0;

    rep(i,0,n)
    {
        cin >> v[i];
        add+=v[i];
    }
    int sp = k*n;

    if(add%2 == 1 || sp%2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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