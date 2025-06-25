#include <iostream>
using namespace std;

int main(){
    int L;
    cin >> L;
    string s;
    cin >> s;
    long long sum = 0;
    long long m = 1234567891;
    long long r = 1;

    for(int i=0; i<L; i++){
        sum += ((long)(s[i]-96) * r)%m;
        r=(r*31)%m;
    }

    cout << sum % m;
}
