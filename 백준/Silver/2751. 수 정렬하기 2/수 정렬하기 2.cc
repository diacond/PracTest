#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N); // 동적 배열

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // 오름차순 정렬

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}