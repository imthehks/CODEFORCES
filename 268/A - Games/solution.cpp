#include <iostream>
#include<vector>
 
using namespace std;
 
void games()
{
    int n{};
    cin >> n;
 
    int Games = n;
    vector<int> home_uni, guest_uni;
 
    while (Games--)
    {
        int h{}; // home uni
        int a{}; // guest uni
        cin >> h >> a;
 
        home_uni.push_back(h);
        guest_uni.push_back(a);
    }
 
    int count{0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (home_uni[i] == guest_uni[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
 
int main()
{
    games();
    return 0;
}