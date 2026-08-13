#include <iostream>
#include <string>
 
using namespace std;
 
void magnets()
{
    int n{};
    cin >> n;
 
    string s{}, prev{};
    int count = 0;
    while (n--)
    {
        cin >> s;
        if (s != prev)
        {
            count++;
            prev = s;
        }
    }
    cout << count << endl;
}
 
int main()
{
    magnets();
    return 0;
}