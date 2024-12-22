p#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int curr = c;
    while (curr <= b)
    {
        if (a <= curr && curr <= b)
        {
            cout << curr;
            return 0;
        }
        curr += c;
    }
    cout << -1;
    return 0;
}