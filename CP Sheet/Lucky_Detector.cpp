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
    string n;
    cin >> n;

    int sz = n.size();

    for(int i = 0; i < sz; i++)
        if(n[i] == '7')
        {
            cout << "Lucky" << endl;
            return;
        }
        cout << "Not Lucky" << endl;
    

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