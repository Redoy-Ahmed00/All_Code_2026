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
    char c;
    cin >> n >> c;

    string a;
    cin >> a;
    string s = a+a;

    if(c == 'g')
    {
        cout << 0 << nl;
        return;
    }

    int l = 0, r = 0;
    vi ans;

    while(l < n && r < n)
    {
        while(s[l] != c) l++;
        while(s[r]!='g') r++;

        ans.push_back(r-l);

        if(l<r)
            l++;
        if(l >= r)
            r++;
    }

    cout << *(max_element(ans.begin(),ans.end())) << nl;
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