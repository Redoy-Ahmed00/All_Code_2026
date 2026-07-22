#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    int cnt = -1;
    for(int i = 0; i <= 6; i++)
    {
        if(x.find(s) != string::npos)
        {
            cnt = i;
            break;
        }
        x += x;
    }
    cout << cnt << endl;

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