#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[2000],s2[1000],s3[1000];
    cin >> s1;
    cin >> s2;
    cin >> s3;


    cout << atoi(s1) + atoi(s2) - atoi(s3) << endl;

    strcat(s1,s2);
    
    cout << atoi(s1)-atoi(s3);
    return 0;
}