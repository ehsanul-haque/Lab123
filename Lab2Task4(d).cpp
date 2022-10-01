#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter any integer number : ";
    cin>>num;

    (num%2==0)? cout<<num<<" is EVEN " : cout <<num <<" is ODD";
    return 0;
}
