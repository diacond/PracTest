#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s); // including space

    for(int i=0; i<s.length(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            continue;
        }
        else if(s[i] == 32) continue;
        else if(s[i] >= 65 && s[i] <= 90){
            s[i] = (s[i] - 'A' + 13) % 26 + 'A';
        }
        else if(s[i] >= 97 && s[i] <= 122){
            s[i] = (s[i] - 'a' + 13) % 26 + 'a';
        }
    }
    cout << s;
}