#include <iostream>
#include <algorithm>
using namespace std;

int N, A[20009];

int main() {
    //入力
    cin >> N;
    // 配列のインデックスは1から
    for (int i=1; i <= N; i++) cin >> A[i];

    // ソート関数の範囲指定は左閉右開（つまり、最初の指定位置は含み、最後の指定位置は含まない）
    sort(A + 1, A + N + 1);

    for (int i = 1; i <= N; i++) cout << A[i] << endl;
    return 0;
}