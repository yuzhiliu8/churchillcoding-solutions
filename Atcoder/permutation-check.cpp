#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > n || arr[a] == 1)
        {
            cout << "No";
            return;
        }
        if (arr[a] == 0)
        {
            arr[a] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
    return;
}

int main()
{
    solve();

    return 0;
}