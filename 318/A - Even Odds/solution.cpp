#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    long long n{0}; // array size
    long long k{0}; // return the value of this index in the array
    cin >> n >> k;  // input array size and index
 
    long long mid = (n + 1) / 2; // middle index of the array
 
    // if k is less than or equal to mid, return 2*k-1, else return k/2+1
    if (k <= mid)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << 2 * (k - mid);
    }
 
    return 0;
}