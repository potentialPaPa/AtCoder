#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
    int N, i;
    cin >> N;

    vector<int>a(N);
    rep(i, N) cin >> a[i]; 
    
    int j=1, ans=0;
    for (i=0;i<N;i++) {
        if (j == 2) {
            break;
        } else if (i==N-1) {
            ans = -1;
        } else {
            ans += 1;
            j = a[j-1];
        }
    }
    cout << ans << endl;
}
