#include <iostream>
using namespace std;

/*int main(){
    int N, sum = 1;
    cin >> N;

    for(int i=N; i>=1; i--){
        sum *= i;
    } // 팩토리얼 계산 후 저장

    // 0의 개수를 뒤에서부터 구해야함... 숫자를 문자열로 바꿔 . to_string ㄴㄴ
    // 문자열로 바꾸지말고, sum을 10으로 나눠서 나머지가 없으면 0임ㅇㅇ 나머지 있으면 0아니니까 멈춰서 카운ㅌ팅한거반환

    int cntZero = 0;

    while(sum!=0){
        if(sum%10 == 0){ // 331100을 10으로 나누면 33110으로 나머지 없으니까 마지막 0 카운트
            sum/=10;
            cntZero++;
        }
        else{ // 3311을 10으로 나누면 331로 나머지 1 생기니까, 숫자는 0이 아니라 1임. 그래서 브레이크 걸기
            sum/=10;
            break;
        }
    }
    cout << cntZero;
    return 0;
}*/

int main() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }

    cout << count;
    return 0;
}