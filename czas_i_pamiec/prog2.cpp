#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int Z;
  cin >> Z;
  while (Z--) {
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; ++i)
      cin >> points[i].first >> points[i].second;
    if (n == 1) {
      cout << 0 << endl;
      continue;
    }
    map<pair<int, int>, int> c;
    for (int i = 0; i < n; ++i)
      c[make_pair(2 * points[i].first, 2 * points[i].second)] += 1;
    for (int i = 0; i < n; ++i)
      for (int j = i + 1; j < n; ++j)
        c[make_pair(points[i].first + points[j].first, points[i].second + points[j].second)] += 2;
    int result = n;
    for (auto elem : c)
      result = min(result, n - elem.second);
    cout << result << endl;
  }
}
