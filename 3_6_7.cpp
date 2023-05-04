#include <iostream>
using namespace std;

int N, A[109];

int solve(int l, int r) {
    if (r - l == 1) return A[l];
    int m = (l + r) / 2;
    int s1 = solve(l, m);
    int s2 = solve(m, r);
    return s1 + s2;
}

int main() {
    //入力
    cin >> N;
    // 配列のインデックスは1から
    for (int i=1; i <= N; i++) cin >> A[i];

    int Answer = solve(1, N + 1);

    cout << "出力" << endl;
    cout << Answer << endl;
    return 0;
}