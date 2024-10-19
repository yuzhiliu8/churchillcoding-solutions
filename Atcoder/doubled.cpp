#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    cin >> n;

    if (n.length() % 2 == 0)
    {
        vector<string> pairs;
        for (int i = 0; i < n.length()-2; i + 2){
            string p = n.substr(i, i+2);
            pairs.push_back(p);
            cout << p << ' ';
        }
    }
    
}

int main()
{
    solve();
    return 0;
}