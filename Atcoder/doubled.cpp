#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
    cin >> n;

    for (int i = 0; i < 1000001; i++){
        if(stoll(to_string(i) + to_string(i)) > n){
            cout << i-1 << endl;
            return;
        }
    }
}

int main(){
    
    solve();
    return 0;
}