#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    vector<int> count(10001, 0); // 1~10000 까지 등장하는 횟수를 저장함

    int x;

    for(int i=0; i<N; i++){
        cin >> x;
        count[x]++;    
    }

    for(int i=0; i<=10000; i++){
        while(count[i]--){
            cout << i << '\n';
        }
    }
    return 0;
}