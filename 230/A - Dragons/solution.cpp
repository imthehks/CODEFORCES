#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
void dragons()
{
    int s{}; // strength
    int n{};
    cin >> s >> n;
 
    vector<pair<int, int>> dragon;
 
    while (n--)
    {
        int x{}, y{};
        cin >> x >> y;
 
        dragon.push_back({x,y});
    }
    sort(dragon.begin(), dragon.end());
  
    for (int i = 0; i < dragon.size(); ++i)
    {
       
        if (dragon[i].first < s)
        {
            s += dragon[i].second;
        }
        else
        { 
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
 
int main()
{
    dragons();
    return 0;
}