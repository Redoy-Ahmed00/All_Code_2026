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
    int n,cnt=0;
    cin >> n;
    string s;
    cin >> s;

    while(n != 0)
    {
        n = n/2;
        cnt++;
    }
    cout << cnt << endl;
    // int mx = 1;
    // int cnt = 1;

    // for(int i = 1; i < n; i++)
    // {
    //     if(s[i] == s[i-1])
    //         cnt++;
    //     else
    //     {
    //         mx = max(mx, cnt);
    //         cnt = 1;
    //     }
    //     mx = max(mx, cnt);
    // }
    // mx = max(mx, cnt);


    // if(mx != 1)
    //     cout << mx << endl;
    // else if(mx != 1 && mx == n)
    //     cout << 2 << endl;
    // else
    //     cout << (n/2) + 1 << endl;
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