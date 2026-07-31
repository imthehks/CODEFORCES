#include <iostream>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n{}; // n rooms total
    cin >> n;
 
    int count {0};
 
    while (n--)
    {
        int pi{}; // ppl living in it
        int qi{}; //  room can accommodate qi people in total (pi <= qi)
        cin >> pi >> qi;
 
        if(qi-pi>=2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}