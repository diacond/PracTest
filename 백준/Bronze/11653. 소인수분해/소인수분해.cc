#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(N == 1)
        return 0;
    else{
        for(int i = 2; ; i++){
            for(;;){
                if((int)N/i == (double)N/i){
                    N /= i;
                    cout << i <<"\n";
                }
                else break;
            }
            if(N == 1)
                break;
        }
        return 0;
    }
}