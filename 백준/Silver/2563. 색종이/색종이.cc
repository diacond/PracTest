#include <iostream>
using namespace std;

int main(){
    int N;
    int arr[100][100] = {0};
    cin >> N;
    int i;
    int x[1000];
    int y[1000];
    int cnt=0;
    for(i=0;i<N;i++){
        cin >> x[i] >> y[i];
        for(int j = 0; j<10;j++){
            for(int k = 0; k<10; k++){
                arr[x[i]+j][y[i]+k] = 1;
            }
        }
    }

    for(int m=0;m<100;m++){
        for(int n=0; n<100; n++){
            //cout << arr[m][n];
            if(arr[m][n] == 1){
                cnt+=1;
            }
        }
    }

    cout << cnt;
    return 0;
}