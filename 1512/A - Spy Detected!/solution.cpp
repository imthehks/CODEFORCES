#include <iostream>
#include <vector>
using namespace std;
 
void spy()
{
    int n{};
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    int val{};
 
    if (arr[0] == arr[1])
    {
        val = arr[0];
    }
    else
    {
        val = arr[2];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != val)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}
 
int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        spy();
    }
    return 0;
}