#include <iostream>
#include <string>
using namespace std;
 
void chessResult()
{
 
    int n{}; // games played
    cin >> n;
 
    string s;
    cin >> s;
 
    int a{0};
    int d{0};
 
    for (int i = 0; i < n; i++)
    {
 
        if ('A' == s[i])
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
}
 
int main()
{
    chessResult();
    return 0;
}