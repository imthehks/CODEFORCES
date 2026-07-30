#include <iostream>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int k{}, l{}, m{}, n{}, d{};
    cin >> k;
    cin >> l;
    cin >> m ;
    cin >> n;
    cin >> d;
 
    int bucket = 0;
    for(int i=0; i<=d; i++){
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
            bucket++;
        }
    }
    cout << d-bucket << endl;
    return 0;
}