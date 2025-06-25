#include <iostream>
using namespace std;
int main(){
    int N;
    int room;
    cin >> N;

    if(N==1){
        room = 1;
        cout << room;
        return 0;
    }

    int i=1;
    int check=2;

    while(1){
    
        if(check <= N && N < check + 6*i){
            room = i+1;
            break;
        }
        else{
            check = check + 6*i;
            i++;
        }
    }
    cout << room;
    return 0;
}