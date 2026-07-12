#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
 
    // t test cases
    int t{0};
    cin >> t; // 1<= t <= 50
 
    while (t > 0)
    {
        int n{0};
        cin >> n; // each test case can contain n elements
 
        if (n == 1)
        {
            cout << 1 << '
';
        }
        else if (n == 2)
        {
            cout << -1 << '
';
        }
        else
        {
            vector<long long> array;
 
            // n=3 -> array = {1,2,3} --> 1+2+3 = 6
            array.push_back(1);
            array.push_back(2);
            array.push_back(3);
 
            long long sum = 6; // current sum of the array
 
            while ((int)array.size() < n)
            {
                array.push_back(sum);
                sum = sum * 2;
            }
 
            for (int i = 0; i < array.size(); i++)
            {
                cout << array[i];
                if (i != n - 1)
                {
                    cout << " ";
                } 
            }
            cout << '
';
        }
        t--;
    }
    return 0;
}