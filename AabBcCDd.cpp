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
    string s;
    cin >> s;

    map<char,int> mp;

    for(char c:s)
    {
        c = tolower(c);
        mp[c]++;
    }

    int mx1 = 0;
    int mx2 = 0;
    

    for (auto [x, y] : mp)
    {
        if (y > mx1)
        {
            mx2 = mx1;
            mx1 = y;
        }
        else if (y > mx2)
            mx2 = y;
        
    }


    cout << mx1+mx2 << endl;
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