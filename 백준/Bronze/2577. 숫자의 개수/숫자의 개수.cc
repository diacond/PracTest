#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    int cnt[10] = {0};

    cin >> a;
    cin >> b;
    cin >> c;

    int result = a*b*c;

    string cal = to_string(result);
    for(int i=0; i<cal.length(); i++){
        if(cal[i] == '0') cnt[0]++;
        else if(cal[i] == '1') cnt[1]++;
        else if(cal[i] == '2') cnt[2]++;
        else if(cal[i] == '3') cnt[3]++;
        else if(cal[i] == '4') cnt[4]++;
        else if(cal[i] == '5') cnt[5]++;
        else if(cal[i] == '6') cnt[6]++;
        else if(cal[i] == '7') cnt[7]++;
        else if(cal[i] == '8') cnt[8]++;
        else if(cal[i] == '9') cnt[9]++;
    }
    for(int i=0; i<10; i++) cout << cnt[i] << endl;
    
    return 0;
}