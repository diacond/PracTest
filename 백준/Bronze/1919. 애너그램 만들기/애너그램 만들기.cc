   /*
    그냥 글자 구성이 똑같으면 애너그램 관계임*/
    /*
    aabbcc
    xxyybb
    
    공통으로 들어가 있는 글자들을 추린다 그리고 각 문자열에서 그 글자들을 제거한다. 
    남아있는 글자들을 모두 더하면 된다*/
#include <iostream>
#include <string>
#include <vector>
#include <cmath>  // abs 함수 사용
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;

    vector<int> count1(26,0); // count1이라는 26크기의 벡터에 0을 넣겠다.
    vector<int> count2(26,0); // 마찬가지

    for(char c:s1) count1[c-'a']++;
    for(char c:s2) count2[c-'a']++;

    int deleteCount = 0;
    for(int i=0; i< 26; i++){
        deleteCount += abs(count1[i] - count2[i]);
    }
    cout << deleteCount << endl;

    return 0;
}