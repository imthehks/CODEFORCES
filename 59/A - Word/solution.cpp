#include<iostream>
#include<string>
#include<cctype>
using namespace std;
 
void word(){
    string s{};
    cin >> s;
 
    int lowerCount = 0;
    int upperCount = 0;
 
    for(int i=0; i<s.size(); i++){
        char c = s[i];
        if(c >='A' && c<='Z'){
            upperCount++;
        }else{
            lowerCount++;
        }
    }
    if(lowerCount>=upperCount){
        for(char &c: s){
            c = std::tolower(c);
        }
        cout << s << endl;
    }else{
        for(char &c: s){
            c = std::toupper(c);
        }
        cout << s << endl;
    }
}
 
int main(){
    word();
    return 0;
}