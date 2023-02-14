#include<bits/stdc++.h>

using namespace std;

const int N = 100010;
int q[N], s[N];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    int res = 1;
    for (int i = 0, j = 0; i < n; i++) {
        s[q[i]]++;
        while( j < i && s[q[i]] > 1) {
            s[q[j++]]--;
        }
        res = max(res, i - j + 1);
    }
    cout << res << endl;
    return 0;
}



