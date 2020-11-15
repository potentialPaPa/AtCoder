#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int ans;
    ans = min({a+b, b+c, c+a});

    cout << ans << endl;
}
