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
  ll ret = 0;
  for (int a = 1; a < N; a++) {
    ret += (N - 1) / a;
  }
  cout << ret << endl;
}
