#include <iostream>

using namespace std;

int main()
{
    float physics,chemistry,math,english,biology,total_mark,pMark,full_mark;
    cout<<"Enter your Physics mark : ";
    cin>>physics;
    cout<<"Enter your Chemistry mark : ";
    cin>>chemistry;
    cout<<"Enter your Math mark : ";
    cin>>math;
    cout<<"Enter your English mark : ";
    cin>>english;
    cout<<"Enter your Biology mark : ";
    cin>>biology;

    total_mark=physics+chemistry+math+english+biology;
    full_mark=500;
    pMark=(total_mark/full_mark)*100;

    cout<<"\n\nTotal marks : "<<total_mark<<endl;
    cout<<"\nAvarage marks : "<<pMark<<"%"<<endl;

    if(95<=pMark && pMark<=100)
    {
        cout<<"\nExtra ordinary.";
    }
    else if(80<=pMark && pMark<95)
    {
        cout<<"\nDistinction.";
    }
    else if(65<=pMark && pMark<80)
    {
        cout<<"\nFirst division.";
    }
    else if(55<=pMark && pMark<65)
    {
        cout<<"\nSecond division.";
    }
    else if(40<=pMark && pMark<55)
    {
        cout<<"\nThird division.";
    }
    else
    {
        cout<<"\nFailed.";
    }

    return 0;
}

