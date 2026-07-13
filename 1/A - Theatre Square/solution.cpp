#include <iostream>
using namespace std;
 
int main()
{
    long long n{0};
    cin >> n;
    long long m{0};
    cin >> m;
 
    long long a{0};
    cin >> a;
 
    long long length = n / a;
    if (n % a != 0)
    {
        length += 1;
    }
 
    long long width = m / a;
    if (m % a != 0)
    {
        width += 1;
    }
    cout << length * width << endl;
    return 0;
}