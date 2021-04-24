#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int N;
  cin >> N;

  // solve
  ll res = 0;
  for (int i = 1; i < N; i++) {
    res += (N - 1) / i;
  }
  cout << res << endl;
}
