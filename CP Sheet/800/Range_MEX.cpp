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
    int n, q;
    cin >> n >> q;

    int a[n+1];
    int c0[n+1];
    int c1[n+1];
    int c2[n+1];

    c0[0] = 0;
    c1[0] = 0;
    c2[0] = 0;

    for(int i = 1; i <= n; i++)
        cin >> a[i];
    
    for(int i = 1; i <= n; i++)
    {
        int cnt = 0;
        if(a[i] == 0)
            cnt++;
        c0[i] = c0[i-1]+cnt;
    }

    for(int i = 1; i <= n; i++)
    {
        int cnt = 0;
        if(a[i] == 1)
            cnt++;
        c1[i] = c1[i-1]+cnt;
    }

    for(int i = 1; i <= n; i++)
    {
        int cnt = 0;
        if(a[i] == 2)
            cnt++;
        c2[i] = c2[i-1]+cnt;
    }
    

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        // bool z= false, o = false, t = false;

        // for(int i = l; i <= r; i++)
        // {    
        //     if(a[i] == 0)
        //         z = true;
        //     if(a[i] == 1)
        //         o = true;
        //     if(a[i] == 2)
        //         t = true;
        // }

        // if(!z)
        //     cout << 0 << endl;
        // else if(!o)
        //     cout << 1 << endl;
        // else if(!t)
        //     cout << 2 << endl;
        // else
        //     cout << 3 << endl;

        if(c0[r]-c0[l-1] == 0)
            cout << 0 << endl;
        else if(c1[r]-c1[l-1] == 0)
            cout << 1 << endl;
        else if(c2[r]-c2[l-1] == 0)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
}

int main ()
{
    optimize();
              
    int t = 1;
    //cin >> t;

    while(t--)
        solve();
        
    return 0;
}