#include <iostream>
using namespace std;

int main(){
    // 저작권멜로디 m / 수록곡 수 n
    // 내가 아는 정보 : n, m/n = avg(반올림된 상태)

    int n, avg;
    cin >> n >> avg;

    // m 구해야하고, m/n = (int)avg...
    // 문제 조건 : 적어도 몇 개 인지?

    cout << (1+(avg-1) * n);
}