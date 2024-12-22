#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;

void solve(){
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int monkeys = 0;
    int free = 0;
    monkeys += min(m, a);
    free += m - min(m, a);
    monkeys += min(m, b);
    free += m - min(m, b);

    monkeys += min(free, c);

    cout << monkeys << endl;
}

int main(){
    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}