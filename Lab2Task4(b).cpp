#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a integer number : ";
    cin>>n;

       if ((n | 1) > n)
    {
        cout << n << " is EVEN Number";
    }
    else
    {

        cout << n << " is ODD Number";
    }
    return 0;
}
