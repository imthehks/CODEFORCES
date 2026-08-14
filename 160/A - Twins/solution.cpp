#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void twins()
{
    int n{};
    cin >> n;
 
    vector<int> coins(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
 
    sort(coins.rbegin(), coins.rend());
 
    int mySum = 0;
    int remSum = 0;
 
    for (int i : coins)
    {
        remSum += i;
    }
 
    int count = 0;
 
    for (int i : coins)
    {
        mySum += i;
        remSum -= i;
        count++;
        if (mySum > remSum)
        {
            break;
        }
    }
 
    cout << count << endl;
}
 
int main()
{
    twins();
    return 0;
}