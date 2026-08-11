#include <iostream>
#include <string>
 
using namespace std;
 
void football()
{
    string s{};
    cin >> s;
 
    int count_0 = 0;
    int count_1 = 0;
 
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            count_0++;
            count_1 = 0;
        }
        else
        {
            count_0 = 0;
            count_1++;
        }
 
        if (count_0 >= 7 || count_1 >= 7)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
 
int main()
{
    football();
    return 0;
}