#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,min, max;
    cout<<"Enter three numbers"<<endl;
    cin>>num1>>num2>>num3;
    if(num1<num2 && num1<num3)
    {
        cout<<num1<<" is the smallest"<<endl;
        min = num1;
    }
    else if(num2<num3)
    {
        cout<<num2<<" is the smallest"<<endl;
        min = num2;
    }
    else
    {
        cout<<num3<<" is the smallest"<<endl;
        min = num3;
    }

    if(num1>num2 && num1>num3)
    {
        cout<<num1<<" is largest"<<endl;
        max = num1;
    }
    else if(num2>num3)
    {
        cout<<num2<<" is largest"<<endl;
        max = num2;
    }
    else
    {
        cout<<num3<<" is largest"<<endl;
        max = num3;
    }

    if (min % 2 == 0)
    {
        cout << min << " is EVEN Number & it is the smallest among the three numbers"<<endl;
    }
    else
    {
        cout << min << " is ODD Number & it is the smallest among the three numbers"<<endl;
    }
    if (max % 2 == 0)
    {
        cout << max << " is EVEN Number & it is the largest among the three numbers"<<endl;
    }
    else
    {
        cout << max << " is ODD Number & it is the largest among the three numbers"<<endl;
    }
    return 0;
}
