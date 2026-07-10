#include <iostream>
using namespace std;
 
int main()
{
    int t{0};
    cin >> t; // (1 ≤ t ≤ 10,0000)
 
    long long a{0};
    long long b{0};
    int count{0};
 
    for (int i{0}; i < t; i++)
    {
        cin >> a >> b;
 
        if (a >= b)
        {
            int rem = a % b;
            if (rem == 0)
            {
                count = 0;
                cout << count << endl;
            }
            else
            {
                count = b - rem;
                cout << count << endl;
            }
        }
        else
        {
            count = b - a;
            cout << count << endl;
        }
    }
 
    return 0;
}