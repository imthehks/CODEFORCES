#include<iostream>
#include<set>
#include<string>
#include<cctype>
 
using namespace std;
 
void pangram(){
    int n{}; 
    cin >> n;
 
    string s{};
    cin >> s;
 
    set<char> uni_letters;
 
    for(char c: s){
        uni_letters.insert(tolower(c));
    }
 
    if(uni_letters.size()==26){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    pangram();
    return 0;
}