#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    if (s[5] - '0' > 0 || s[6] - '0' > 4) {
        puts("TBD");
    } else {
        puts("Heisei");
    }
    return 0;
}