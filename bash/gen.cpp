#include<bits/stdc++.h>
using namespace std;

const int NumTestcases = 10;
const int MaxN = 50000;
const int MaxElementMagnitude = 1e6;

random_device rd;
mt19937 gen(rd());

int random_number_between(int p, int q) {
    return uniform_int_distribution<> (p, q)(gen);
}

int main() {
    cout << NumTestcases << endl;
    for (int z = 0; z < NumTestcases; z++) {
        int n = random_number_between(2, MaxN);
        int k = random_number_between(2, n);
        cout << n << " " << k << endl;
        for (int i = 0; i < n; i++) {
            cout << random_number_between(-MaxElementMagnitude, MaxElementMagnitude);
            cout << " ";
        }
        cout << endl;
    }
}
