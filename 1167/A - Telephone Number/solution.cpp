#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    int t{};
    cin >> t;
 
    while(t--){
        bool flag = true;
 
        int n{}; // length of string
        cin >> n;
 
        string s{}; 
        cin >> s;
 
       
        if(n<11){
            flag = false;
        }
        else if(n==11){
            if(s[0]=='8')
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
        }
        else
        {
            int chances = n-11;
            string st="";
            for(int i=0; i<n; i++){     
                if(s[i]!='8' && chances>0){
                    chances--;   
                }
                else{
                    st += s[i];
                }
            }
            if(st[0]=='8'){
                flag = true;
            }else{
                flag = false;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}