#include <iostream>
 
using namespace std;
 
int team()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        int a{};
        cin >> a;
        if (a == 1)
        {
            count++;
        }
    }
    int ans{};
    if (count >= 2)
    {
        ans++;
    }
    return ans;
}
 
int main()
{
    int n{};
    cin >> n;
 
    int ans{};
    while (n--)
    {
        ans += team();
    }
    cout << ans << endl;
    return 0;
}