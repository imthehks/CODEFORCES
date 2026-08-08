#include<iostream>
#include<set>
#include<string>
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
 
    set<char> stringSet;
 
    for(char c: s){
        stringSet.insert(c);
    }
 
    int n=stringSet.size();
    if(n%2==0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}