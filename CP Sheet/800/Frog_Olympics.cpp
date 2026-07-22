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
    int n;
    cin >> n;

    bool l = false, j = false;
    for(int i = 0; i*3 <= n; i++)
    {
        if((n-(i*3)) % 4 == 0)
        {
            l = true;
            break;
        }
    } 
    for(int i = 0; i*3 <= n; i++)
    {
        if((n-(i*3)) % 5 == 0)
        {
            j = true;
            break;
        }
    }

    if(!l && !j)
    {
        cout << "None\n";
        return;
    }
    if(l && j)
        cout << "Both\n";
    else if(j)
        cout << "Jumpster\n";
    else 
        cout << "Leapy\n";
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