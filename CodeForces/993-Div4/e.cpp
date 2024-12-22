#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;


int binSearchLargestXY(int l1, int r1, int l2, int r2, int kn) {
    int low = l1;
    int high = r1;

    while (low <= high){
        ll midX = low + (high - low) / 2;
        ll y = midX * kn;

        if ((y > (r2-kn) && y <= r2) || (midX == r1 && y <= r2)){
            //cout << "large: " << endl;
            return midX;
        }
        else if (y < r2){
            low = midX + 1; 
        }
        else {  // y > r2
            high = midX - 1;
        }
    }
    return -1;
}

int binSearchSmallestXY(int l1, int r1, int l2, int r2, int kn){
    int low = l1;
    int high = r1;

    while (low <= high) {
        ll midX = low + (high - low) / 2;
        ll y = midX * kn;

        if ((y < (l2 + kn) && y >= l2) || (midX == l1 && y >= l2)){
            //cout << "small" << endl;
            return midX;
        }
        else if (y < l2){
            low = midX + 1;
        }
        else { // y > l2
            high = midX - 1;
        }
    }
    return -1;
}

void solve(){
    ll k;
    int l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    int sum = 0;
    for (int n = 0; n <= 32; n++){
        //cout << n << ' ';
        ll kn = pow(k, n);
        if (kn > 1e9){
            break;
        }
        int hiX = binSearchLargestXY(l1, r1, l2, r2, kn);
        int loX = binSearchSmallestXY(l1, r1, l2, r2, kn);

        int delta;
        if (hiX == -1){
            delta = 0;
        }
        else {
            delta = (abs(hiX - loX) + 1);
        }
        //cout << kn << ' ' << delta << endl;
        sum += delta;
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}
