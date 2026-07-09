#include <iostream>
using namespace std;
int main()
{
    // range of y - (1000 ≤ y ≤ 9000) — the year number
    long long y{0};
    cin >> y;
 
    for (long long i = y + 1; i <= 9100; i++)
    {
        long long first = i / 1000;
        long long second = (i % 1000) / 100;
        long long third = ((i % 1000) % 100) / 10;
        long long fourth = ((i % 1000) % 100) % 10;
 
        if (first != second && first != third && first != fourth  //first is compared to all
            && second != third && second != fourth  //second is compared to remaining
            && third != fourth) //third is compared to remaning
        {
            cout << i;
            break;
        }
    }
    return 0;
}