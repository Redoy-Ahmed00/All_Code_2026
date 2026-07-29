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
    int n, k, x;
    cin >> n >> k >> x;

    if(k==x && x == 1)
        cout << "NO" << nl;
    else
    {
        int oc =  0, ec = 0;
        rep(i,1,k+1)
        {
            if(i==x)    continue;
            if(i%2==0)  ec++;
            else        oc++;
        }
        if(n%2==1  && oc==0)
            cout << "NO" << nl;
        else
        {
            cout << "YES" << nl;
            if(x == 1)
            {
                cout << n/2 << nl;
                rep(i,0,n/2-1)
                    cout << 2 << ' ';
                (n%2) ? (cout << 3 << nl):(cout << 2 << nl);
            }
            else
            {
                cout << n <<  nl;
                rep(i,0,n)
                    cout << 1 << ' ';
                cout << nl;
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