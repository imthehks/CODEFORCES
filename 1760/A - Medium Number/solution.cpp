#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t{0}; //(1 <= t <= 6840)
    cin >> t;
    int a{0}, b{0}, c{0}; //(1 <= a, b, c <= 20)
    int arr[3] = {a, b, c};
    for (int i{0}; i < t; i++)
    {
        cin >> a >> b >> c;
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }
    return 0;
}