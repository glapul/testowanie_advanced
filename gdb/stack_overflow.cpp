#include <bits/stdc++.h>
using namespace std;

const int MX = 1000;
bool vis[MX];
vector<int> graf[MX];
int n;

void fill_data() {
    n = 2;
    graf[0].push_back(1);
    graf[1].push_back(0);
}

void dfs(int v) {
    for (auto i : graf[v])
        dfs(i);
    vis[v] = true;
}

int main() {
    fill_data();
    dfs(0);
    for (int i = 0; i < n; i++)
        if (vis[i])
            printf("%d\n", i);
}
