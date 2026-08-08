#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    int t{};
    cin >> t;
 
    while(t--){
 
        int num{};
        cin >> num;
 
        string m = to_string(num);
        int len = m.size();
 
        int k = 1;
        int i=1;
 
        while(i<len){
            k*=10;
            i++;
        }
        
        cout << num - k << endl;
 
        
    }
    return 0;
}