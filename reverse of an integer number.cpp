
#include <iostream>
using namespace std;
int main()
{
    int n, r = 0, a;
    cout << "Please Enter an integer: ";
    cin >> n;
   while(n>0)
    {
        a = n%10;
        r = r*10 + a;
        n /= 10;
    }
    cout << "Reversed Number = " << r;
    return 0;
}
