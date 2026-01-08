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
    string s;
    cin >> s;
    int n = s.size();
    map<string, int> mp;

    for(int i = 0; i < n-1; i++)
    {
        string tm = "";
        tm += s[i];
        tm += s[i+1];

        mp[tm]++;
    }

    cout << mp.size() << endl;

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