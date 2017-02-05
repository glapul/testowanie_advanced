#include <bits/stdc++.h>
using namespace std;

char s[1000007];
int main() {
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        s[i] ^= 32;
    }
    printf("%s\n", s);
}
