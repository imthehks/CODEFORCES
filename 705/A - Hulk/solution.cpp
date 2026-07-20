#include <iostream>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n{};
    cin >> n;
    
        int len = 1;
        while (len <= n)
        {
            if (len % 2 != 0)
            {
                cout << "I hate ";
            }
            else
            {
                cout << "I love ";
            }
            if (len != n)
                cout << "that ";
            else
                cout << "it" << endl;
 
            len++;
        }
 
    return 0;
}