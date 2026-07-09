#include<iostream>
using namespace std;
int main (){
    //elephant is at index 0
    //friend is at x position (x>0)
    int steps {0};
    //steps taken by elephant 1-2-3-4-5
    int x {0};
    cin >> x; //friend's position
 
    if(x<=5){
        steps = 1;
        cout << steps;
    }
    if(x>5){
        int quo = x/5;
        int rem= x%5;
        if(rem<=5 && rem >0){
            quo++;
        }
        steps=quo;
        cout << quo;
    }
    return 0;
}