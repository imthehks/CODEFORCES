#include <iostream>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n = 0;
    cin >> n;
    long long count =0;
 
    while(n>0){
        int rem = n%10;
        if(rem==7 || rem==4){
            count ++;
        }
        n=n/10;
    }
    if(count==4 || count == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
    
}