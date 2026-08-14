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
    ll n, q;
    cin >> n >> q;
    
    vll v(n+1);
    
    rep(i,1,n+1)
        cin >> v[i];
        
    sort(v.begin()+1, v.end());
    
    while(q--)
    {
        ll x, l = 1, r = n;
        cin >> x;
        bool has = false;
        ll i = 0;
        
        while(l <= r)
        {
            ll mid = (l+r)/2;
            
            if(v[mid]==x)
            {
                has = true;
                break;
            }
            else if(v[mid] > x)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
                i = mid;
            }
            
        }
        if(has)
            cout << 0 << endl;
        else
        {
            if(i%2==0)
                cout << "POSITIVE"  << endl;
            else
                cout << "NEGATIVE" << endl;
        }
        
    }
}

int main ()
{
    optimize();
              
    int t = 1;
    //cin >> t;

    while(t--)
        solve();
        
    return 0;
}