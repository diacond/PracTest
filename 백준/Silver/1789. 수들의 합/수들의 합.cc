#include <iostream>
using namespace std;

int main(){
    long long S;
    long long s = 0,cnt = 0;

    cin >> S;

    for(int i = 1; ; i++){
        s+=i;
        ++cnt;
        if(s > S){
            cnt-=1;
            cout << cnt;
            break;
        }
        if(s == S){
            cout << cnt;
            break;
        }
    }
    return 0;
}