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
    int c1 = 0, c2 = 0;

    rep(i,0,n)
    {
        int a;
        cin >> a;
        if(a==-1)   c1++;
        else        c2++;
    }
    int ops= 0;
    
    int need = (n+1)/2;
    if(c2 < need)
    {
        ops += need-c2;
        c1-= ops;
        c2+= ops;
    }
    if(c1%2==1)
        ops++;

    cout << ops << nl;

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