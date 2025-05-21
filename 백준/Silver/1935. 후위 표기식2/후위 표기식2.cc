#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int N;
    stack<double> s;
    string str;
    vector<int> operand(26);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> str;

    for(int i=0;i<N;i++){
        cin >> operand[i];
    }

    for(int i=0; i<str.length();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){ // 피연산자 알파벳이면 걍 밀어넣고
            s.push(operand[str[i]-'A']);
        }
        else // 연산자면 밀어넣지말고 그 전에 있던 피연산자 2개랑 처리해서 그 값을 밀어넘
        {
            if(!s.empty()){
                double opr = s.top();
                s.pop();
                if(str[i] == '+'){
                    opr = s.top() + opr;
                }
                else if(str[i] == '-'){
                    opr = s.top() - opr;
                }
                else if(str[i] == '*'){
                    opr = s.top() * opr;
                }
                else if(str[i] == '/'){
                    opr = s.top() / opr;
                }
                s.pop(); // 기존에 받은 피연산자 하나 빼고
                s.push(opr); // 중간 계산값을 푸시함
            }
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << s.top() << '\n';

    return 0;

}