#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << a + b << endl;
    } else {
        cout << 2 * max(a, b) - 1 << endl;
    }
    return 0;
}