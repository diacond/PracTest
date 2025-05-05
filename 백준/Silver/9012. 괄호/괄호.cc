#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main(){
    int T;
    string s;
    cin >> T;

    int i,j;
    for(i=0; i<T; i++){
        stack<char> st;
        cin >> s;

        //is it vps???
        for(j = 0; j<s.size(); j++){
            if(s.at(j) == '('){
               st.push('('); 
            }
            else{
                if(st.empty())
                    break;
                st.pop();
            }
        }

        if(j==s.size() && st.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;

}