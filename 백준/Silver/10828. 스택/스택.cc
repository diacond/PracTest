#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int N, num;
    cin >> N;
    stack<int> st;
    for(int i = 0; i< N; i++){
        string inst;
        cin >> inst;

        if(inst == "push"){
            cin >> num;
            st.push(num);
        }
        else if(inst == "pop"){
            if(st.empty()){
                cout << -1 << endl;
            }
            else{
                cout << st.top() << endl;
                st.pop();
            }    
        }
        else if(inst == "size"){
            cout << st.size() << endl;
        }
        else if(inst == "empty"){
            if(st.empty()){
                cout << 1 << endl;
            }
            else cout << 0 << endl;
        }
        else if(inst == "top"){
            if(st.empty()) cout << -1 << endl;
            else cout << st.top() << endl;
        }
    }
    return 0;
}