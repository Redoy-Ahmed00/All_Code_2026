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
    int n, k, odd = 0;
    cin >> n >> k;

    string s;
    cin >> s;
    int f[26]= {0};

    for(int i = 0; i < n; i++)
        f[s[i] - 'a']++;
    
    for(int i = 0; i < 26; i++)
        if(f[i] % 2 == 1)
            odd++;  

    if(odd > k + 1)
        cout << "NO\n";
    else    
        cout << "YES\n";

    
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