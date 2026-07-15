#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    long long n{0};
    cin >> n;
 
    // long long sum1{0};
    // long long sum2{0};
    // for (auto i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {                                           // * time limit exceeded
    //         sum2 += i;
    //     }
    //     else
    //     {
    //         sum1 += i;
    //     }
    // }
    
    // have to convert sum1 -> -ve number
    // sum1 = 0 - sum1;
    long long answer {0};
    if(n%2==0){
        answer = n/2;
    }else{
        answer = -(n+1)/2;
    }
    cout << answer << endl;
    return 0;
}