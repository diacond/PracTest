/*
먼저 숫자를 문자열로 우선 받아야함.
그리고 둘이 +로 붙인 다음, stoi 써서 정수로 되돌리고 연산
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << stoll(A+B) + stoll(C+D);
    return 0;
}