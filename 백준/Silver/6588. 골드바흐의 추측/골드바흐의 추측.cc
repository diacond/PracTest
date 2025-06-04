#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAX = 1000000;
    vector<bool> is_prime(MAX + 1, true);
    is_prime[0] = is_prime[1] = false;

    // 에라토스테네스의 체로 소수 미리 구하기
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // 입력 저장
    vector<int> inputs;
    int n;
    while (cin >> n && n != 0) {
        inputs.push_back(n);
    }

    // 결과 계산
    for (int x : inputs) {
        bool found = false;
        for (int i = 3; i <= x / 2; i += 2) {
            if (is_prime[i] && is_prime[x - i]) {
                cout << x << " = " << i << " + " << x - i << '\n';
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Goldbach's conjecture is wrong.\n";
        }
    }

    return 0;
}
