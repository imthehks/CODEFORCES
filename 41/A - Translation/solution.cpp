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
 
    std::string temp{};
    for (int i = s.size() - 1; i >= 0; --i)
    {
        temp+=s[i];
    }
 
    if(temp==t){
        std::cout << "YES" << endl;
    }else{
        std::cout << "NO" << endl;
    }
}
 
int main()
{
    translation();
    return 0;
}