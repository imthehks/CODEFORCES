#include <iostream>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    /*
    ! if the last digit of the number is non-zero, she decreases the number by one;
    * if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
    */
 
    int n{}; // number
    int k{}; // number of times she subtract
    cin >> n >> k;
    while (k > 0)
    {
        int last_digit = n % 10;
        if (last_digit == 0)
        {
            n = n / 10;
            k--;
        }else{
        n--;
        k--;
        }
    }
    cout << n << endl;
    return 0;
}