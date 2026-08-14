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
    ll n;
    cin >> n;

    vll v(n);
    vll p1, p2, f2, f3;
    rep(i,0,n)
    {
        cin >> v[i];
        if(v[i]>=6  && v[i]%6 == 0)
            p2.push_back(v[i]);
        else if(v[i]>=2  && v[i]%2==0)
            f2.push_back(v[i]);
        else if(v[i]>=3  && v[i]%3==0)
            f3.push_back(v[i]);
        else
          p1.push_back(v[i]);
    }


    for(auto x : p2)
        cout << x << ' ';

    for(auto x : f2)
        cout << x << ' ';
        
    for(auto x : p1)
        cout << x << ' ';    
    for(auto x : f3)
        cout << x << ' ';

    cout << nl;
        
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