#include <iostream>
using namespace std;
 
int main()
{
    // soldier buys w bananas
    //$1 -> 1st banana
    //%2 -> 2nd banana .... so on
    //  i*k dollars for i'th banana
    //  he has n dollars
    //  how many dollars he has to borrow to buy W bananas
    /*
    constraints:
     k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109)
    */
    int k{0};
    cin >> k; // k dollars for first banana
    long long n{0};
    cin >> n; // initial dollars $ of amount he has
    int w{0};
    cin >> w; // number of bananas he wants to buy
 
    long long bananaCost{0};
    int i{1};
    while (w > 0)
    {
        bananaCost += (i * k);
        i++;
        w--;
    }
    if (bananaCost > n)
    {
        cout << bananaCost - n << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}