#include <iostream>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M; // M - 카드 3장 합친거 의 상한선선
    
    int arr[100] = {0};
    int max = 0;;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    // 입력은 다 받음. 배열 다 나옴

    // 3장의 카드를 고르는 모든 조합 (i < j < k)
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            for(int k = j + 1; k < N; k++){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum <= M && sum > max){
                    max = sum;
                }
            }
        }
    }

    
    cout << max;
    return 0;
}