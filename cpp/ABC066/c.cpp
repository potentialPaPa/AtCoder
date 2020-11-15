#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<int>a(n);
    vector<int>b;
    rep(i,n) {
        cin >> a[i];
        if (i%2==0) {
            b.insert(b.begin(), a[i]);
        } else {
            b.insert(b.end(), a[i]);
        }
    }

    if (a.size()%2==0) {
        reverse(b.begin(), b.end());
    }

    rep(i,b.size()) cout << b[i] << " ";
    cout << endl;

}
