#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s{};
    cin >> s;
 
    int len = s.size();
 
    sort(s.begin(), s.end());
 
    string result{};
 
    for (int i = 0; i < len; i++)
    {
 
        if (std::isdigit(s[i]))
        {
            result += s[i];
            if (i < len - 1)
            {
                result += '+';
            }
        }
    }
    cout << result << endl;
    return 0;
}