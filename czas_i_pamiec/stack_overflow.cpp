#include <bits/stdc++.h>
using namespace std;

const int MX = 1000000;
bool vis[MX];
vector<int> graf[MX];
int n;

void fill_data() {
	n = 1e6;
	for (int i = 0; i < n-1; i++) {
		graf[i].push_back(i+1);
		graf[i+1].push_back(i);
	}
}

void dfs(int v) {
    vis[v] = true;
    for (auto i : graf[v])
			if (!vis[i])
        dfs(i);
}

int main() {
    fill_data();
    dfs(0);
    for (int i = 0; i < n; i++)
        if (vis[i])
            printf("%d\n", i);
}
