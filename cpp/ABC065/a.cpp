#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
    int X, A, B;
    cin >> X >> A >> B;
    
    string ans;

    if (B <= A) {
        ans = "delicious";
    } else if (B <= A+X) {
        ans = "safe";
    } else {
        ans = "dangerous";
    }

    cout << ans << endl;
}
