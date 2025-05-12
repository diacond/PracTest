#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n,k;
    queue<int> Q;
    cin >> n >> k;

    for(int i=1;i<=n;i++){
        Q.push(i);
    } // 큐에 1~N입력

    cout << "<";
    while(!Q.empty())
    {
        if(Q.size() == 1){
            cout << Q.front() << ">";
            Q.pop();
            break;
        }
        for(int i=1;i<k;i++){
            int dq = Q.front();
            Q.pop();
            Q.push(dq);
        }
        cout << Q.front() << ", ";
        Q.pop();
    }
    if(!Q.empty()){
        cout << Q.front() << ">\n";
    }
    return 0;
}