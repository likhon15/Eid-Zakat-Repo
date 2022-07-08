#include "bits/stdc++.h"

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    cout << n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}