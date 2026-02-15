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
    bool has1 = false;
    bool has67 = false;

    rep(i,0,n)
    {
        int a;
        cin >> a;
        if(a==1)
            has1 = true;
        if(a==67)
            has67 =  true;
    }

    if(has67)
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