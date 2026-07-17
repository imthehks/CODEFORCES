#include <iostream>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n = {0};
    cin >> n;
 
    int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
 
    bool flag = false;
    for (int d : arr)
    {
        if (n % d == 0)
        {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "NO" << endl;
    }
 
    return 0;
}