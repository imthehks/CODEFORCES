#include <iostream>
using namespace std;
int main(){
   int weight{0};
   cin >> weight;
   
   if(weight>2){
    int left = 2;
    int right = weight -2 ;
    if(left%2==0 && right%2==0){
        cout << "Yes";
    }else{
        cout << "No";
    }
   }else{
    cout << "No";
   }
    return 0;
}