#include <iostream>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n{0};
    cin >> n;
    
        int xSum = 0, ySum = 0, zSum = 0;
 
        for (int i = 0; i < n; i++)
        {
            int x = 0,y=0,z=0;
            cin >> x;
            xSum+=x;
            cin >> y;
            ySum+=y;
            cin >> z;
            zSum+=z;
        }
 
        if (xSum == 0 && ySum ==0 && zSum==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    return 0;
}