#include <bits/stdc++.h>
using namespace std;

char s[1000007];
int my_strlen(char* s) {
	for(int i = 0;;i++)
		if (s[i] == 0) return i;
}
int main() {
    scanf("%s", s);
    for (int i = 0; i < my_strlen(s); i++) {
        s[i] ^= 32;
    }
    printf("%s\n", s);
}
