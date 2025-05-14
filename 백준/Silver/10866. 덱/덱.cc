#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq;
    int N, input;
    string inst;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> inst;
        if(inst == "push_back"){
            cin >> input;
            dq.push_back(input); // no output
        }
        else if(inst == "push_front"){
            cin >> input;
            dq.push_front(input); // no output
        }
        else if(inst == "front"){
            if(dq.size() == 0) cout << -1 << '\n';
            else    cout << dq.front() << '\n';
        }
        else if(inst == "back"){
            if(dq.size() == 0) cout << -1 << '\n';
            else    cout << dq.back() << '\n';
        }
        else if(inst == "size"){
            cout << dq.size() << '\n';
        }
        else if(inst == "empty"){
            if(dq.size() == 0){
                cout << 1 << '\n';
            }
            else cout << 0 << '\n';
        }
        else if(inst == "pop_front"){
            if(dq.size()==0){
                cout << -1 << '\n';
            }
            else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(inst == "pop_back"){
            if(dq.size()==0){
                cout << -1 << '\n';
            }
            else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
    }
    return 0;
}