#include <iostream>
#include <algorithm>
using namespace std;

int divide(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    return divide(y, x % y);
}
 
int main()
{
    int A, B;
    int max = 0;
    cin >> A >> B;
 
    if (A >= B)
    {
        max=divide(A, B);
    }
    else max=divide(B, A);
 
    cout << max << "\n";
    cout << A * B / max << "\n";
}
