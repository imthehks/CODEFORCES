#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
 
    int t{0}; // number of test cases
    cin >> t;
 
    /*
    The page is represented by a string s
    where the character '*' denotes an empty part of the paper
    and the character '#' denotes one centimeter of a drawn line.
    A continuous sequence of '#' characters forms a single line.
 
    Each second, Iskander erases 1 centimeter from the right end of the line,
    and Yura erases 1 centimeter from the left end.
 
    If the current length of the line is 1 or 2centimeters,
    then in the next second it is erased completely, and the process ends.
 
    Yura wants to choose a line so that, together with Iskander,
    they erase it for as long as possible.
    Help him determine this maximum time.
 
    If there are no lines on the page, the answer is 0
    seconds.
    */
 
    while (t--)
    {
 
        // the length of the string
        int n{0}; //(1<= n <=10)
        cin >> n;
 
        string str;
        cin >> str;
 
        int curLen{0};
        int maxLen{0};
 
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '#')
            {
                curLen++;
                maxLen = max(curLen, maxLen);
            }
            else
            {
                curLen = 0;
            }
        }
        int ans = (maxLen + 1) / 2;
        cout << ans << '
';
    }
        return 0;
}