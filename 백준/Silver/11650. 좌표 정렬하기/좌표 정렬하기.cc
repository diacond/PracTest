#include <iostream>
#include <algorithm>
using namespace std;

struct xy{
        int x;
        int y;
    };

bool compare(xy a, xy b){
    if(a.x == b.x) return a.y < b.y;
    else return a.x < b.x;
}

xy xy1[100001];

int main(){
    
    int N , x, y;
    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> xy1[i].x >> xy1[i].y;
    }

    sort(xy1, xy1 + N, compare);

    for(int i = 0; i<N; i++){
        cout << xy1[i].x << " " << xy1[i].y << '\n';
    }

    return 0;
}