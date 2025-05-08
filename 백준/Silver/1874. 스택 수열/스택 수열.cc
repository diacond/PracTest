#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    vector<char>output; // initialize vector
    stack<int>num_array; // initialize stack
    int n; // for iter
    int cnt = 1; // stack's input from 1~n
    cin >> n;

    for(int i=0;i<n;i++){
        int head; // head
        cin >> head;
        
        while(cnt <= head){
            num_array.push(cnt);
            cnt++;
            output.push_back('+');
        } // when we must push

        if(num_array.top() == head){
            num_array.pop();
            output.push_back('-');
        } // when we mush pop

        else{
            cout << "NO";
            return 0;
        }
    }

    for(int i=0;i<output.size(); i++){
        cout << output[i] << '\n';
    }
}