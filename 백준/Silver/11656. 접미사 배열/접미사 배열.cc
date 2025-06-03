#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    int l = s.length();
    string arr[l] = {};

    for(int i=0;i<l;i++){
        arr[i] = s.substr(i,l);
    }

    sort(arr, arr + l);

    for(int i=0; i<l; i++){
        cout << arr[i] << '\n';
    }

    return 0;
}