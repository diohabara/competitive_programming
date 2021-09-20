#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll A, B, C;
  cin >> A >> B >> C;

  // solve
  ll g = gcd(gcd(A, B), C);
  cout << A / g + B / g + C / g - 3 << endl;
}
