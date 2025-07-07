#include <iostream>
using namespace std;

/*int main(){
    // +a -b = v
    int a,b,v;
    int sum = 0;
    int day = 0;
    cin >> a >> b >> v;

    while(1){
        //+a -b +a 해서 도착하면 안미끄러짐
        //+a -b +a -b 해서 미끄러고 다시 +a 올라가서 안미끄러짐
        ++day;
        sum+=a;
        if(sum>=v) break;
        else sum-=b;
    }

    cout << day;
    return 0;
}*/

int main(){
    int a,b,v;
    cin >> a >> b >> v;

    int day = (v-b-1)/(a-b) + 1;
    cout << day;
    
    return 0;
}