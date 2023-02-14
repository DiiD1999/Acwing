#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int n, m;
int h[N], e[N], ne[N], idx;
int d[N];
void insert(int a, int b){
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

int bfs() {
    memset(d, -1, sizeof(d)); 

    queue<int> q;
    d[1] = 0;
    q.push(1);

    while(q.size()){
        int t = q.front();
        q.pop();

        for (int i = h[t]; i != -1; i = ne[i]){
            int j = e[i];
            if (d[j] == -1) {
                d[j] = d[t] + 1;
                q.push(j);
            }
        }
    }
    return d[n];
}
int main() {
    memset(h, -1, sizeof(h));
    cin >> n >> m;
    while( m-- ){
        int a, b;
        cin >> a >> b;
        insert(a, b);
    }

    cout << bfs() << endl;

    return 0;
}
