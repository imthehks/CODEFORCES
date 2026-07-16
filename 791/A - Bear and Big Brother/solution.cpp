#include <iostream>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a = 0; // Limak's weight
    cin >> a;
    int b = 0; // Bob's weight
    cin >> b;
 
    int years_passed = 0;
 
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        years_passed++;
    }
    cout << years_passed << endl;
    return 0;
}