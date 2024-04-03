#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
#define int long long
#define endl '\n'
// By: Tamim

void solve()
{
    int n;
    cin >> n;
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    bool f = true;
    for(auto x : m){
        if(x.second > (n+1)/2){
            f = false;
        }
    }
    if(f){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    
}
int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
