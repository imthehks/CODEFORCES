#include <iostream>
#include <string>
using namespace std;
 
void chat()
{
    string s{};
    cin >> s;
 
    string target = "hello";
    int target_indx = 0;
 
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == target[target_indx])
        {
            target_indx++;
        }
        if(target_indx==5){
            break;
        }
    }
    if (target_indx == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
 
int main()
{
    chat();
    return 0;
}