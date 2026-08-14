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
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    
    int l = 0, r  = 0;
    
    rep(i,0,p)
        if(s[i]=='R')
            l++;
    rep(i,p-1,n)
        if(s[i] == 'L')
            r++;
    
    int ops = min(l,r);
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