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

int part(int *arr, int low, int high)
{
    int pivot = arr[high];
    
    int i = low - 1;

    for(int j = low;j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(int *arr, int low, int high)
{
    if(low < high)
    {
        int pi = part(arr,low , high);
        
        quicksort(arr, low, pi -1);
        quicksort(arr, pi, high);
    }
}


void solve()
{
    int n;
    cin >> n;
    int arr[n];

    rep(i,0,n)
        cin >> arr[i];
    quicksort(arr, 0, n-1);

    rep(i,0,n)
        cout << arr[i] << ' ';
    cout << endl;
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