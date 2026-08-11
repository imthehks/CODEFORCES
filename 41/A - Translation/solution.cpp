#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void translation()
{
    std::string s{};
    cin >> s;
    std::string t{};
    cin >> t;
 
    reverse(s.begin(), s.end());
    if (s == t)
    {
        std::cout << "YES" << endl;
    }
    else
    {
        std::cout << "NO" << endl;
    }
}
 
int main()
{
    translation();
    return 0;
}