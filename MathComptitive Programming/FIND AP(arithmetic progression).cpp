#include<iostream>
using namespace std;

int main()
{
    int FirstTerm,NthTerm,d,i,sum=0;
    cout<<"Enter FirstTerm,NthTerm,commondiffrence :"<<endl;
    cin>>FirstTerm>>NthTerm>>d;
    while(i!=NthTerm)
    {
        cout<<FirstTerm<<"  ";
        sum+=FirstTerm;
        FirstTerm+=d;
        i++;
    }
    cout<<"\n\nSum of FirstTerm To "<<NthTerm<<"thTerm OF AP = "<<sum<<endl;

    return 0;
}


