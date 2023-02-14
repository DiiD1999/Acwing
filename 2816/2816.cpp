#include<bits/stdc++.h>

using namespace std;
const int N = 1000010;
int a[N], b[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }
    int flag = 0;
    for (int i = 0, j = 0; j < m; j++) {
        if (i < n && a[i] == b[j]) {
            i++;
        }
        flag = i;
    }
    if(flag == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
