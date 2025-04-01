#include <iostream>
using namespace std;

int main(){
    int N, M;
    int cntN = 0;
    int cntM = 0;
    int cnt = 0;
    cin >> N >> M; // 일단 크기 받고

    // 최소로 쪼개면서 1*1로 만든다.
    for(int i = N; i>1; i--){
        cntN++;
    }
    for(int j = 0; j<=cntN; j++){
        for(int k = M; k>1; k--)
            cntM++;
    }
    cnt = cntN + cntM;
    cout << cnt;
}