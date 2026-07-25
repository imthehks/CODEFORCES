#include<iostream>
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n{};
    cin >> n;
 
    int response = 0;
    while(n--){
        cin >> response;
        if(response == 1){
            break;
        }
    }
    if(response==1){
        cout << "HARD" << endl;
    }else{
        cout << "EASY" << endl;
    }
    return 0;
}