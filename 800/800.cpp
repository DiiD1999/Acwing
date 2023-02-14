#include<bits/stdc++.h>

using namespace std;
const int N = 1000010;
int a[N], b[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m , x;
    cin >> n >> m >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }
    int i = 0;
    int j = m - 1;
    while ( i < n && j > 0 ) {
        if ( a[i] + b[j] > x ) {
            j--;
        }else if ( a[i] + b[j] < x) {
            i++;
        }else {
            cout << i << " " << j << endl;
            return 0;
        }
    }
    return 0;
}
