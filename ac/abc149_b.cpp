#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

signed main()
{
    ll A, B, K;
    cin >> A >> B >> K;
    if (K < A) {
        cout << A - K << " " << B << endl;
    } else if (B - (K - A) > 0) {
        cout << 0 << " " << B - (K - A) << endl;
    } else {
        cout << 0 << " " << 0 << endl;
    }
    return 0;
}