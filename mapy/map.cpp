#include <bits/stdc++.h>

using namespace std;

map<pair<int, int>, int> M;

int main(){
	int N;
	scanf("%d", &N);
	int h = 0;
	for(int i = 0; i < N; ++i) M[make_pair(rand(), rand())] = rand();
	for(auto kv : M) h += kv.first.first * kv.first.second * kv.second;
	printf("%d\n", h);
	return 0;
}
