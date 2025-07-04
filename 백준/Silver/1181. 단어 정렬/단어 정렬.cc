#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const string &a, const string &b);

int main(){
    
    int N;
    cin >> N;

    vector<string> s(N);
    for(int i=0; i<N;i++){
        cin >> s[i];
    }

    sort(s.begin(), s.end(), compare);

    s.erase(unique(s.begin(), s.end()), s.end());

    for(const string & str : s){
        cout << str << endl;
    }

    return 0;

}

bool compare(const string &a, const string &b){
    if(a.length() == b.length()) return a<b;
    return a.length() < b.length();
}
