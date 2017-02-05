#include<bits/stdc++.h>
using namespace std;
#define int long long
#define x first
#define y second
int32_t main() {
    int k = (-1LL) << 32;
    int z;
    cin >> z;
    while (z--) {
        vector<pair<int,int>> v;
        int n;
        cin >> n;
        unordered_map<int,int> m(n*n/4);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            v.emplace_back(x, y);
            x*=2;
            y*=2;
            m[(x << 32LL) | (y&(~k))]++;
        }
        for (int i = 0; i < n; i++)
            for (int j = i+1; j < n; j++) {
                int x = v[i].x + v[j].x;
                int y = v[i].y + v[j].y;
                m[(x << 32LL) | (y&(~k))]+=2;
            }
        int mx = 0;
        for (auto i : m) {
            mx = max(i.y, mx);
        }
        cout << n - mx << endl;
    }
}
