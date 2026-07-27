#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n{}; // no. of soldiers
    cin >> n;
 
    int k{}; // bottles of soft drink
    cin >> k;
 
    int l{}; // each bottle has l ml of the drink
    cin >> l;
 
    int c{}; // limes
    cin >> c;
 
    int d{}; // limes are cut into d no. of slices
    cin >> d;
 
    int p{}; // p gram of salt
    cin >> p;
 
    // to make toast each frined needs
    int nl{}; //  nl mililitres of the drink
    cin >> nl;
 
    // a slice of lime
 
    int np{}; // np gram of salt
    cin >> np;
 
    int totalDrinks = k * l;
    int totalToasts = totalDrinks / nl;
    int totalLimes = c * d;
    int totalSalt = p / np;
 
    int result = (min({totalToasts, totalLimes, totalSalt})) / n;
    cout << result << endl;
    return 0;
}