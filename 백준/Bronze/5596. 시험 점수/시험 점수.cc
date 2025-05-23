#include <iostream>
using namespace std;
int main(){
    int min, man;
    int minSum=0, manSum=0;
    for(int i=0; i<4; i++){
 
        cin>>min;
        minSum+=min;
 
    }
 
    for(int j=0; j<4; j++){
 
        cin>>man;
        manSum+=man;
 
    }
 
    if(minSum>=manSum) cout << minSum;
    else cout<<manSum;
}