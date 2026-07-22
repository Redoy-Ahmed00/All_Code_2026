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
    int n = 10;
    int add = 0;
    int s[10][10] = {
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,2,2,2,2,2,2,2,2,1},
                    {1,2,3,3,3,3,3,3,2,1},
                    {1,2,3,4,4,4,4,3,2,1},
                    {1,2,3,4,5,5,4,3,2,1},
                    {1,2,3,4,5,5,4,3,2,1},
                    {1,2,3,4,4,4,4,3,2,1},
                    {1,2,3,3,3,3,3,3,2,1},
                    {1,2,2,2,2,2,2,2,2,1},
                    {1,1,1,1,1,1,1,1,1,1}
                    };
    rep(i,0,10)
    {
        rep(j,0,10)
        {
            char a;
            cin >> a;
            if(a== 'X')
                add += s[i][j];
        }
    }
    cout << add << nl;
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