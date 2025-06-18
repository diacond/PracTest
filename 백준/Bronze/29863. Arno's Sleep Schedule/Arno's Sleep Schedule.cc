#include <iostream>
using namespace std;
int main(){
    int sleep;
    int alarm;
    cin >> sleep;
    cin >> alarm;

    int gap;
    if(sleep<4){
        gap = alarm - sleep;
    }
    else if(sleep>19){
        gap = 24 + (alarm - sleep);
    }
    cout << gap;
    return 0;
}