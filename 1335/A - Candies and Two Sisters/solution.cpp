#include <iostream>
using namespace std;
int main()
{
    // n candies
    // a>b ---> alice
    // n-a = b ----> betty
    // n = a+b
    int t{0}; // number of test cases
    cin >> t;
 
    int n{0}; // number of candies
    int a{0}; // number of alice candies (a>b)
    int b{0}; // number of betty candies (b<a)
 
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int number_of_ways{0};
        a = n / 2 + 1;
        b = n - a;
        number_of_ways = b;
        cout << number_of_ways << endl;
    }
    return 0;
}