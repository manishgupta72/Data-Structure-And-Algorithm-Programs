#include<iostream>
using namespace std;
int main()
{

    int a1=0,a2=1,NthTerm,i=1,currentTerm=0,temp;
    cin>>NthTerm;

    cout<<a1<<" ";
    while(i!=NthTerm)
    {
        temp=a2;
        currentTerm+=temp;
        a2=currentTerm;
        a2=a2-temp;
        cout<<currentTerm<<" ";
        i++;
    }
    return 0;
}
