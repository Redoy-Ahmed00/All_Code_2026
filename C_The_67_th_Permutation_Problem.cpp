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

    vi v(3*n + 1, 0);
    int p = 3*n, t = p;
    int j = 1;
    rep(i,1,p+1)
    {
        if(i%3==0)
        {
            v[i] = j;
            j++;
        }
        else
        {
            v[i] = t;
            t--;
        }
        
    }

    rep(i,1,p+1)
        cout << v[i] << ' ';
    cout << endl;
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