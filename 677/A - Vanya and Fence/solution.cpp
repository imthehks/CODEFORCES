#include <iostream>
 
using namespace std;
 
void vf()
{
    int n{}; //! the number of friends
    cin >> n;
 
    int h{}; //* height of fence
    cin >> h;
 
    int width{};
 
    for (int i = 0; i < n; i++)
    {
        int input{};
        cin >> input;
        if (input <= h)
        {
            width++;
        }
        else
        {
            width += 2;
        }
    }
    cout << width << endl;
}
 
int main()
{
    vf();
    return 0;
}