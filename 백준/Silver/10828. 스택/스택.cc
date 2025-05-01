#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    int N, n, result;
    cin >> N; // 명령어 개수 정하기
    string command;

    for(int i = 0; i<N; i++){
        // 명령어 개수만큼 반복 돌면서 명령어 수행!
        cin >> command;

        //push
        if(command == "push"){
            cin >> n;
            s.push(n);
        }
        //pop
        else if(command == "pop"){
            if(s.size() == 0){
                result = -1;
                cout << result << endl;
            }
            else{
                result = s.top();
                cout << result << endl;
                s.pop();
            }
        }
        //size
        else if(command == "size"){
            cout << s.size() << endl;
        }

        //empty
        else if(command == "empty"){
            if(s.size() == 0){
                result = 1;
                cout << result << endl;
            }
            else{
                result = 0;
                cout << result << endl;
            }
        }
        else if(command == "top"){
            if(s.size() == 0){
                result =0;
                cout << -1 << endl;
            }
            else{
                result = s.top();
                cout << result << endl;
            }
        }
    }
    return 0;
}