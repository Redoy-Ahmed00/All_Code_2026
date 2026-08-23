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

    vector<string> v;

    // int oc = count(s.begin(),s.end(), '1');
    // int zc = count(s.begin(),s.end(), '0');

    for(int i = 0; i < n-1; i++)
    {
        if(s[i] != s[i+1])
        {
            v.push_back(s.substr(0,i+1));
            v.push_back(s.substr(i+1,n-i));
        }
    }

    for(auto x : v)
        cout << x << nl;

    cout << nl;
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