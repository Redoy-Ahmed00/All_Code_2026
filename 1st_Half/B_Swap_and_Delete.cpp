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
    string s, t ="";
    cin >> s;
    int n = s.size();
    int oc = 0, zc = 0;

    rep(i,0,n)
        if(s[i]=='1')    oc++;
        else        zc++;

    rep(i,0,n)
    {
        if(s[i] == '1')
        {
            if(zc > 0)
            {
                t.push_back('0');
                zc--;
            }
            else break;
        }
        else
        {
            if(oc > 0)
            {
                t.push_back('1');
                oc--;
            }
            else break;
        }
    }
    int m = t.size();
    cout << n - m << endl;
    
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