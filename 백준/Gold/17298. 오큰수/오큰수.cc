#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    vector<int> result(N, -1); 
    stack<int> s;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // 오른쪽부터 탐색
    for (int i = N - 1; i >= 0; i--) {
        // 작거나 같은 값은 필요 없음
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        if (!s.empty()) {
            result[i] = s.top(); 
        }

        s.push(arr[i]); 
    }

 
    for (int i = 0; i < N; i++) {
        cout << result[i] << ' ';
    }

    return 0;
}
