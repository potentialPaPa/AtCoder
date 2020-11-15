#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
    int N, i;
    cin >> N;

    vector<int>a(N);
    rep(i, N) cin >> a[i];

    sort(a.begin(), a.end());
    
    cout << a[N-1] - a[0] << endl;

}
