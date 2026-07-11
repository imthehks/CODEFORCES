#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int n{0};
    cin >> n; // 1<= n <= 100
 
    // X can pass levels of game p
    // 0<= p <= n
    int p{0};
    cin >> p;
    int x{0};
 
    set<int> array;
 
    for (int i = 1; i <= p; i++)
    {
        int level{0};
        cin >> level;
        array.insert(level);
    }
 
    // Y can pass levels of game q
    // 0<= q <= n
    int q{0};
    cin >> q;
    int y{0};
 
    for (int i = 1; i <= q; i++)
    {
        int level{0};
        cin >> level;
        array.insert(level);
    }
    bool a = true;
    for (int i = 1; i <= n; i++)
    {
        if (array.find(i) == array.end())
        {
            cout << "Oh, my keyboard!" << endl;
            a=false;
            break;
        }
    }
    if(a) cout << "I become the guy." << endl;
 
    return 0;
}