#include <bits/stdc++.h> 
#define ll long long int
#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin >> n;

    unordered_set<int> modes;
    unordered_set<int> not_modes;
    
    for (int i = 1; i <= n; i++){
        not_modes.insert(i);
    }

    string ans = "";
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;

        if (modes.find(a) != modes.end()){
            auto it = not_modes.begin();
            ans += to_string(*it) + ' ';
            not_modes.erase(*it);
            modes.insert(*it);
        }        
        else {
            modes.insert(a);
            not_modes.erase(a);
            ans += to_string(a) + ' ';
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}

