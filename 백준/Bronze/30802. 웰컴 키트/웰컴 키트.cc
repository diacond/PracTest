#include <iostream>
using namespace std;
int main(){
    int s[6] = {0};
    int N;
    int T, P;

    cin >> N;
    for(int i=0; i<6; i++){
        cin >> s[i];
    }
    cin >> T >> P;

    int cnt =0;
    for(int i=0;i<6;i++){
        cnt+=s[i]/T +(s[i]%T>0);
    }
    cout << cnt << ' ' << N/P <<' '<< N%P;
    return 0; 
}