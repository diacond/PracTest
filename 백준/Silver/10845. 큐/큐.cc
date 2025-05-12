#include <iostream>
#include <queue>
using namespace std;

int main(){

    int n,x;
    queue<int> Q;
    string inst;
    cin >>n;

    for(int i =0; i<n; i++){
        cin >> inst;

        if(inst == "push"){
            cin >> x;
            Q.push(x);
        }

        else if(inst == "pop"){
            if(Q.empty()){
               cout << -1 << '\n'; 
            }
            else{
                cout << Q.front() << '\n';
                Q.pop();
            }
        }

        else if(inst == "size"){
            cout << Q.size() << '\n';
        }

        else if(inst == "empty"){
            cout << Q.empty() << '\n';
        }
        else if (inst == "front") {
			if (Q.empty()) 
                cout << -1 << '\n';
			else cout << Q.front() << '\n';
		}
		else if (inst == "back") {
			if (Q.empty())
                cout << -1 << '\n';
			else cout << Q.back() << '\n';
		}
    }
    return 0;
}
