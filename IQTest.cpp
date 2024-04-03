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
    char a[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    bool f = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i + 1][j]) // 11
            {                                                         // 10
                f = true;
            }
            if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i + 1][j+1]) //11 
            {                                                           //01
                f = true;
            }
            if (a[i][j] == a[i+1][j + 1] && a[i+1][j + 1] == a[i + 1][j])//10
            {                                                            //11
                f = true;
            }
            if (a[i+1][j+1] == a[i][j + 1] && a[i][j + 1] == a[i + 1][j])
            {
                f = true;
            }
            
            
            
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
