#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string str;
    

    while(getline(cin,str)){

        int cntA=0,cnta=0,cnt1=0,cntNULL = 0;
        
        for(int i=0; i<str.length();i++){
            if(str[i] >= 97 && str[i]<=122) cnta++;
            else if(str[i] >= 65 && str[i]<=90) cntA++;
            else if(str[i] >= 48 && str[i] <= 57) cnt1++;
            else if(str[i] == 32) cntNULL++;
        }
        cout << cnta << ' ' << cntA << ' ' << cnt1 << ' ' << cntNULL << "\n";
    }

    return 0;
}