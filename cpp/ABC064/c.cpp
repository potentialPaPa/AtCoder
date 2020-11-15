#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
    int N, i;
    cin >> N;

    vector<int>a(N),b(N),c(9,0);
    rep(i, N) {
        cin >> a[i];
        b[i] = float(a[i]/400);
        if (b[i] >= 8) {
            b[i] = 8;
            c[8] += 1;
        } else {
            c[b[i]] = 1;
        }

    }

    int ans_min, ans_max;

    ans_min = max(accumulate(c.begin(), c.end()-1, 0), 1);
    ans_max = accumulate(c.begin(), c.end()-1, 0) + c[8];
    cout << ans_min << " " << ans_max << endl;
}
