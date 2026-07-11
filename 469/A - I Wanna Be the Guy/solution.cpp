#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    /*
    int n{0};
    cin >> n; // 1<= n <= 100
 
    // X can pass levels of game p
    // 0<= p <= n
    int p{0};
    cin >> p;
 
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
 
    for (int i = 1; i <= q; i++)
    {
        int level{0};
        cin >> level;
        array.insert(level);
    }
    if(array.size()==n){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
 
    /*
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
    */
 
    int n{0};
    cin >> n;
 
    bool passed[101] = {false}; // n <= 100
 
    int p{0};
    cin >> p;
 
    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        passed[level] = true;
    }
 
    int q{0};
    cin >> q;
 
    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        passed[level] = true;
    }
 
    for (int i = 1; i <= n; i++)
    {
        if (!passed[i])
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}