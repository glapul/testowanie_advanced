#include <bits/stdc++.h>

using namespace std;

struct hasher {
	int operator()(const pair<int, int> p) const {
		return (p.first * 31 + p.second) % 1000000007;
	}
};

unordered_map<pair<int, int>, int, hasher> M;

int main(){
	int N;
	scanf("%d", &N);
	int h = 0;
	for(int i = 0; i < N; ++i) M[make_pair(rand(), rand())] = rand();
	for(auto kv : M) h += kv.first.first * kv.first.second * kv.second;
	printf("%d\n", h);
	return 0;
}
