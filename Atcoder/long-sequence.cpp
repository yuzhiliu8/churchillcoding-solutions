#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    long long a_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        a_sum += arr[i];
    }

    long long x;
    cin >> x;

    long long k = (x / a_sum) * n; // <-- first part, still need remainder
    long long remainder = x % a_sum;
    long long sum = 0;
    int i = 0;
    while (sum <= remainder)
    {
        sum += arr[i];
        i = (i + 1) % n;
        k++;
    }
    cout << k;
}

int main()
{
    solve();
}