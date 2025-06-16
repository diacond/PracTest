#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a>>b>>c>>d>>e;

    int cum;
    cum = (a*a + b*b + c*c + d*d + e*e)%10;

    cout << cum;
    return 0;
}