#include <iostream>

using namespace std;

int main()
{
    int y,x=2, z=4;

    cout<<"X = "<<x<<endl<<"Z = "<<z<<endl<<endl;


    y = x++ + ++x;
    cout<<"x++ + ++x = "<<y<<endl<<endl;
    y= ++x + ++x;
    cout<<"++x + ++x = "<<y<<endl<<endl;
    y= ++x + ++x + ++x;
    cout<<"++x + ++x + ++x = "<<y<<endl<<endl;
    y = x>z;
    cout<<"x>z = "<<y<<endl<<endl;
    y= x>z? x:z;
    cout<<"y= x>z? x:z . Ans is= "<<y<<endl<<endl;
    y = x&z;
    cout<<"x&z = "<<y<<endl<<endl;
    y= x>>2 + z<<1;
    cout<<"x>>2 + z<<1 = "<<y<<endl<<endl;
    return 0;
}
