#include <iostream>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n{};
    cin >> n;
 
    int odd_count = 0;
    int even_count = 0;
 
    int even_index = 0;
    int odd_index = 0;
 
    for (int i = 0; i < n; i++)
    {
        int x{};
        cin >> x;
 
        if (x % 2 == 0)
        {
            even_count++;
            even_index = i + 1;
        }
        else
        {
            odd_count++;
            odd_index = i + 1;
        }
    }
 
    if (odd_count > even_count)
    {
        cout << even_index << endl;
    }
    else
    {
        cout << odd_index << endl;
    }
    return 0;
}