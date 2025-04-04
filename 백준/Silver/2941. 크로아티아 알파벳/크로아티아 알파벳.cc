#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int cnt = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, 3) == "dz=") {
            cnt++;
            i += 2; 
        }
        else if (str.substr(i, 2) == "c=" || str.substr(i, 2) == "c-" || 
                 str.substr(i, 2) == "d-" || str.substr(i, 2) == "lj" || 
                 str.substr(i, 2) == "nj" || str.substr(i, 2) == "s=" || 
                 str.substr(i, 2) == "z=") {
            cnt++;
            i++;  
        }
        else {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
