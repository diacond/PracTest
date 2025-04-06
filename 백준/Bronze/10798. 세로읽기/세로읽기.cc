#include <iostream>
using namespace std;

char str[5][15];

int main(){
    for(int i=0;i<5;i++){
        cin >> str[i];
    }
    
    for(int j=0; j<15; j++){
        for(int i=0; i<5; i++){
            if(str[i][j] == '\0'){
                continue;
            }
            cout<<str[i][j];
        }
    }
    return 0;
}