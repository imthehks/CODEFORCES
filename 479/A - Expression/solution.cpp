#include <iostream>
using namespace std;
int main()
{
    // (1 ≤ a, b, c ≤ 10).
    int a{0};
    int b{0};
    int c{0};
    cin >> a >> b >> c;
 
    int current{0}; 
    int maxi{0}; 
 
    char pro = '*'; 
    char sum = '+';
 
    for (int i = 1; i <= 4; i++)
    {
        if (i == 1)
        {
            current = a + b + c;
            maxi = max(maxi, current);
        }
        else if (i == 2)
        {
            current = a * b * c;
            maxi = max(maxi, current);
        }
        else if (i == 3)
        {
            current = (a + b) * c;
            maxi = max(maxi, current);
        }
        else if (i == 4)
        {
            current = a * (b + c);
            maxi = max(maxi, current);
        }
    }
    cout << maxi;
    return 0;
}