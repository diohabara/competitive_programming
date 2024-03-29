#include <bits/stdc++.h>

#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
using namespace boost::multiprecision;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  vector<int> P(26);
  rep(i, 26) {
    cin >> P[i];
    P[i]--;
  }

  // solve
  rep(i, 26) { cout << (char)('a' + P[i]); }
  cout << endl;
}
