#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; string s;
    cin >> N;
    cin.ignore();

    for(int j=0; j<N; ++j){
        getline(cin,s);
        cin.clear();
        cout << j+1 << ". " << s << '\n';
    }
}