#include <iostream>
using namespace std;
void recursion(int i, int j, int n){ 
    if(n == 1){
        cout << "*";
        return;
    }
    else if((i/(n/3)) % 3 == 1 && (j/(n/3)) % 3 == 1){
        cout << " ";
    }
    else{
        recursion(i,j,(n/3));
    }
}

int main(){
    int N;
    cin >> N;
    // 3^k

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            recursion(i,j,N);
        }
        cout << '\n';
    }
    return 0;
}