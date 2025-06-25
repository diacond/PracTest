#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int nn=1, kk=1;
    for(int i=0; i<k; i++){
        nn *= (n-i);
        kk *= (i+1);
    }
    cout << nn/kk;
    return 0;
    
}