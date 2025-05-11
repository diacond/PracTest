#include <iostream>
#include <stack>
using namespace std;

/*
1. 문자열을 입력받음. 커서의 움직임은 왼쪽,오른쪽
2. 커서 기준으로 문자열이 나뉘는데, 그냥 문자열 Left, right로 쪼개서 생각하기
3. 그리고 각각의 문자열을 stack 으로 생각하기. 처음 입력받을때는 우리가 평소에 자판칠때 처럼
    ~문자열~(커서) 이런식으로 생각해서 초기 문자열 입력받을 때는 Left 스택에 모든 문자 존재.
*/

int main(){

    stack<char> L,R;
    string str;
    cin >> str;

    for(int i=0;i<str.size();i++){
        L.push(str[i]);
    } // str initializing

    //iter for inst
    int n;
    cin >> n;

    for(int i=0;i<n; i++){
        char inst;
        cin >> inst;
        if(inst == 'L'){
            if(L.size()>0){
                char top = L.top();
                L.pop();
                R.push(top);
            }
        }
        else if(inst == 'D'){
            if(R.size()>0){
                char top = R.top();
                R.pop();
                L.push(top);
            }
        }
        else if(inst == 'B'){
            if(L.size()>0) L.pop();
        }
        else{
            char plus;
            cin >> plus;
            L.push(plus);
        }

        // print all
    }
    while(L.size()>0){
        char top = L.top();
        L.pop();
        R.push(top);
    }
    while(R.size()>0){
        char top = R.top();
        R.pop();
        cout << top;
    }
    return 0;
}