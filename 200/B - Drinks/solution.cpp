#include <iostream>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n{}; //! the number of orange-containing drinks in Vasya's fridge.
    cin >> n;
 
    
    double res = 0;
    double p =0;
    for(int i=0; i<n; i++){
        cin >> p;
 
        res += p/n;
 
    }
    cout << res << endl;
    return 0;
}