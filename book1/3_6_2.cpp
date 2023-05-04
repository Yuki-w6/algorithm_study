#include <iostream>
#include <algorithm>
using namespace std;

int N, A[20009];

int main() {
    //入力
    cin >> N;
    // 配列のインデックスは1から
    for (int i=1; i <= N; i++) cin >> A[i];

    for (int i=1; i <= N-1; i++) {
        int min = i; int min_value = A[i];
        for (int j = i+1; j <= N; j++) {
            if (A[j] < min_value) {
                min = j;
                min_value = A[j];
            }
        }
        swap(A[i], A[min]);
    }

    cout << "出力" << endl;
    for (int i = 1; i <= N; i++) cout <<  A[i] << endl;
    return 0;
}