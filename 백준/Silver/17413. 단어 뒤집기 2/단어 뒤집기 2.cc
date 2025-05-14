#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

/*int main(){
    string input;
    getline(cin, input); // 공백 포함 한줄 입력
    istringstream iss(input);
    string word;
    vector<string> words;
    while(iss >> word){ // 공백 기준으로 단어들 분리
        words.push_back(word); // 해서 벡터에 하나씩 저장
    }
    
    int i=0;
    while(i < words.size()){ // 단어들의 집합에서 마지막 단어
        stack<char> s;
        string& current_word = words[i];
        
        if(current_word[0] == '<' && current_word.back() == '>'){
            cout << words[i];
        }
        else{
            for(int j = 0; j<=words[i].size(); ++j){
                s.push(current_word[j]);
            }
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }
        }
        i++;
        if(i <words.size()){
            cout << ' ';
        }
    }
    return 0;
}*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

// 스택을 사용하여 단어를 뒤집어 출력하고 스택을 비우는 함수
void print_and_clear_stack(stack<char>& s) {
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

int main() { // 걍 <> 이거 때매 한글자씩 입력받는게 나을듯...
    string input;
    getline(cin, input); // 전체 라인 입력

    stack<char> word_chars_stack; // 스택 선언언

    bool in_tag = false; // 태그 내부인지?

    for (int i = 0; i < input.length(); ++i) {
        char current_char = input[i];

        if (current_char == '<') {
            // 태그 시작작
            print_and_clear_stack(word_chars_stack);
            // 태그 시작하면 모아둔 것 한번 비우기기

            in_tag = true;    // 태그 상태로 변경
            cout << current_char; 
        }

        else if (current_char == '>') {
            // 태그 종료
            in_tag = false;
            cout << current_char;
        }

        else if (in_tag) {
            cout << current_char; // 태그안에 있는애들은 그대로 출력 
        }

        else { // 태그 아닌애들들
            if (current_char == ' ') {
                print_and_clear_stack(word_chars_stack);
                cout << current_char; // 공백 출력 
            }

            else {
                word_chars_stack.push(current_char);
            }
        }
    }
    print_and_clear_stack(word_chars_stack);

    return 0;
}