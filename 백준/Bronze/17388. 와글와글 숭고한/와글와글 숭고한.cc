#include <iostream>
using namespace std;

int main(){
    int s;
    int k;
    int h;

    cin >> s >> k >> h;

    if(s+k+h < 100){
        if(s<k && s<h) cout << "Soongsil";
        else if(k<s && k<h) cout << "Korea";
        else if(h<k && h<s) cout << "Hanyang";
    }

    else{
        cout << "OK" << endl;
    }
    return 0;
}