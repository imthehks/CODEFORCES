#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a{}; //! red socks
    int b{}; //?  blue socks
    cin >> a >> b;
 
    int diff_socks = min(a,b);
    int same_socks = (max(a,b)-min(a,b))/2;
 
    cout << diff_socks << " " << same_socks << endl;
    return 0;
}