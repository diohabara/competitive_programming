#include <algorithm>
#include <iostream>
using namespace std;
static const int MAX = 1000000;

int main()
{
    int R[MAX], n;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> R[i];

    int maxv = -2000000000; //十分小さい値を初期値に
    int minv = R[0];

    for (int i = 1; i < n; i++) { // ここで毎回R[i]を読み込めば，配列は不要
        maxv = max(maxv, R[i] - minv); // 最大値を更新
        minv = min(minv, R[i]); // ここまでの最小値を保持しておく
    }
    cout << maxv << endl;

    return 0;
}

//ミスをした原因
//maxvを十分に小さい値(考えられる最小値-最大値)にしなかったこと