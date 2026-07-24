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
    ll n, zc = 0;
    cin >> n;
    vll v(n);
    rep(i,0,n)             
    {
        cin >>v[i];
        if(v[i] == 0)   zc++;
    }

    int i = 0, par = 0; 
    while(i < n)
    {
        if(v[i]!=0)
        {
            par++;
            while(i < n && v[i]!=0)
                i++;
        }
        else 
            i++;
    }
    if(par > 2)
        cout << 2 << nl;
    else
        cout << par << nl;
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