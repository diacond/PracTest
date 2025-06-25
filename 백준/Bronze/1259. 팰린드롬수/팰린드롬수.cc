#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    while(1){
        cin >> s;
        if(s == "0") return 0;
        string s2 = s;
        reverse(s.begin(), s.end());
        if(s2 == s){
            cout << "yes" << endl;
        }
        else cout << "no" << endl;
        
    }
}