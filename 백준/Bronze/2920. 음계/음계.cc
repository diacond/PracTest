#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[8];
    int up=0,down=0;
    for(int i=0; i<8; i++) cin >> arr[i];

    for(int i=0; i<7; i++){
        if(arr[i] > arr[i+1])
            up++;
        else if(arr[i] < arr[i+1])
            down++;
        
    }
    if(up==7) cout << "descending";
    else if(down==7) cout << "ascending";
    else cout << "mixed";

    return 0;
}