#include <iostream>
using namespace std;

int N,M;
int a[1000][1000] = {0};
int b[1000][1000] = {0};

int main(){

    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> a[i][j];
        } 
    } // cin a

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> b[i][j];
        }
    } // cin b

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << b[i][j] + a[i][j] << ' ';
        }
        cout << endl;
    } // a + b


    return 0;
}