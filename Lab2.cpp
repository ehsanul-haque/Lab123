#include <iostream>

using namespace std;

int main()
{
    string name, rollNo;
    float mSub1, mSub2, mSub3, mSub4, mSub5, mSum, score;
    cout << "Enter your name : " ;
    getline(cin,name);
    cout<< "Enter your roll no ";
    cin>>rollNo;
    cout<<"Enter number from 5 subjects"<<endl;
    cin>>mSub1 >>mSub2 >> mSub3 >> mSub4 >> mSub5;
    mSum = mSub1 + mSub2 + mSub3 + mSub4 + mSub5;
    score = (mSum / 500)*100;

    cout<<"Name of Student: "<<name<<endl;
    cout<<"Roll Number: "<<rollNo<<endl;
    cout<<"Percentage Score Secured: "<<score<<endl;

    return 0;
}
