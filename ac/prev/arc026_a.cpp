#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;
    int ans;
    if (n <= 5) {
        ans = n * b;
    } else {
        ans = b * 5 + (n - 5) * a;
    }
    cout << ans << endl;
    return 0;
}