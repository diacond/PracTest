#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    /*
    피연산자 그대로 출력...
    연산자 - 우선순위 존재. () 괄호 처리 해야함. 
    1*(2+3) = > 123+* 
    모든 연산자는 일단 스택에 푸시한다. 
    괄호는 출력은 하지않고 pop만 한다. 스택을 pop할떄 )가 보이면, 
    (가 나올 떄 까지 계속 출력을 한다.
    그렇지 않은 경우는 그*/

    string s; 
    stack<char> o; // 스택 선언
    cin >> s; // 식 입력 받음음

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){ // 식에서 피연산자 나오면
            cout << s[i]; // 그대로 출력
            continue;
        }
        if(s[i] == '(')
            o.push(s[i]); // 괄호는 일단 푸시시
        else if(s[i] == ')'){ // 닫는 괄호 나오면, 바로 안에 있는 애들 출력
            // 괄호는 출력하지 않음음
            while(!o.empty() && o.top() != '('){ // 스택이비거나 여는 괄호가 아니면면
                cout << o.top();; 
                o.pop();
            }
            o.pop(); // ( 여는 괄호 pop
        }
        else if(s[i] == '*' || s[i] == '/'){
            while(!o.empty() && (o.top() == '*' || o.top() == '/')){
                cout << o.top();
                o.pop();
            }
            o.push(s[i]);
        }
        else if(s[i] == '+' || s[i] == '-'){
            /*
            더하기 빼기는 제일 나중 순서니까, 스택이 비거나 (가 아닌경우
            스택에 있는 애들 먼저 제거해준다.
            */
            while(!o.empty() && o.top() != '('){
                cout << o.top();
                o.pop();
            }
            o.push(s[i]);            
        }
    }
    while(!o.empty()){
        cout << o.top();
        o.pop();
    }
    return 0;
    
}