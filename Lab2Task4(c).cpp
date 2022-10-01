#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter any Integer number : ";
    cin>>n;
    if ((n / 2) * 2 == n)
    {
        cout << n << " is EVEN Number";
    }
    else
    {

        cout << n << " is ODD Number";
    }
    return 0;
}
