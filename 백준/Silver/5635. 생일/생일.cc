#include <iostream>
#include <algorithm>
using namespace std;

class student{
    public:
    string name;
    int day;
    int month;
    int year;

    student() {}
};

bool compare(student s1, student s2){
    if(s1.year != s2.year) return s1.year <s2.year;
    if(s1.month != s2.month) return s1.month < s2.month;
    return s1.day < s2.day;
}

int main(){
    int n;
    string na;
    cin >> n; // 1~100

    student* kids = new student[n]; // dynamic array using

    for(int i=0; i<n; i++){
        cin >> kids[i].name >> kids[i].day >> kids[i].month>> kids[i].year;
    }

    sort(kids, kids+n, compare);

    cout << kids[n-1].name <<'\n' << kids[0].name;

    delete[] kids;
    return 0;
}