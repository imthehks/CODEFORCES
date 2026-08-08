#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    while (n--)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        int rounds = 0;
        while (true)
        {
            if (a == b || a == c || b == c)
            {
                break;
            }
            if (a > b && a > c)
            {
                if (b < c)
                {
                    a--;
                    b++;
                }
                else
                {
                    a--;
                    c++;
                }
            }
            else if (b > a && b > c)
            {
                if (a < c)
                {
                    b--;
                    a++;
                }
                else
                {
                    b--;
                    c++;
                }
            }
            else
            {
                if (a < b)
                {
                    c--;
                    a++;
                }
                else
                {
                    c--;
                    b++;
                }
            }
            rounds++;
        }
        cout<<rounds<<'
';
    }
    return 0;
}