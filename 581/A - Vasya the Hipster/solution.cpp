#include <iostream>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a{}; //! red socks
    int b{}; //?  blue socks
    cin >> a >> b;
 
    int diff_socks{0};
    int same_socks{0};
 
    while (a > 0 && b > 0)
    {
        a--;
        b--;
        diff_socks++;
    }
    same_socks = (a+b)/2;
    cout << diff_socks << " " << same_socks << endl;
    return 0;
}