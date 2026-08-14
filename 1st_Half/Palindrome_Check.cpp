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
    rep(i,0,n)
        cin >> v[i];
    int l = 0, r = n-1;
    bool flag = true;

    while(l<=r)
    {
        if(v[l]==v[r])
            l++,r--;
        else
        {
            if(v[l]==k)
                l++;
            else if(v[r]==k)
                r--;
            else
            {
                flag = false;
                break;
            }
                
        }
    }

    if(flag)
        cout << "Yes" << nl;
    else
        cout << "No" << nl; 
    
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