#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;
    
    int N = S.length()-1;
    int now_N = N;

    for(int i=1;i<N;i++) {
        if (now_N%2==0) {
            if (S.substr(0, now_N/2) == S.substr(now_N/2, now_N/2)) {
                cout << now_N << endl;
                return 0;
            }
        }
        now_N -= 1;
    }
}
