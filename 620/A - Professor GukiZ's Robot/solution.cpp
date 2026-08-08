#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    int steps{0};
 
    int x1{}, y1{};
    cin >> x1 >> y1;
 
    int x2{}, y2{};
    cin >> x2 >> y2;
 
    int x_dis = abs(x2-x1);
    int y_dis = abs(y2-y1);
    
    int d = min(x_dis,y_dis);
    
    if(x_dis!=y_dis){
        int gap = abs(x_dis-y_dis);
        d+=gap;
 
    }
    
    cout << d << endl; 
    return 0;
}