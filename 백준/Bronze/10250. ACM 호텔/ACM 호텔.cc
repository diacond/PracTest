#include <iostream>
using namespace std;

int main(){
    int tc;
    int answer[100];
    cin >> tc;

    for(int i=0; i<tc; i++){
        int h,w,n;
        cin >> h >> w >> n;

        // n번째 사람에게 배정할 방 번호?
        /*
        101 201 301 ... 102 202 302 ... */
        // hhww까지 가면 끝
        
        int floor, room;
        floor = n%h;
        room = n/h + 1;

        if(floor == 0){
            floor = h;
            room = n/h;
        }
        n = floor * 100 + room;
        answer[i] = n;
        
    }

    for(int i=0; i<tc; i++){
        cout << answer[i] << endl;
    }
    return 0;
}