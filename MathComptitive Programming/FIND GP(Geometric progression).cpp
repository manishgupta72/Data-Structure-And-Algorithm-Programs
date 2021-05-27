#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int FirstTerm,NthTerm,r,i=0,sum=0;
    cout<<"Enter FirstTerm,NthTerm,commondiffrence :"<<endl;
    cin>>FirstTerm>>NthTerm>>r;
    while(i!=NthTerm)
    {
        int currentTerm;

//        currentTerm=FirstTerm*pow(r,i);
          cout<<FirstTerm<<"  ";
           sum+=FirstTerm;
        FirstTerm=FirstTerm*=r;
//        cout<<currentTerm<<"  ";

//        sum+=currentTerm;

        i++;
    }
    cout<<"\n\nSum of FirstTerm To "<<NthTerm<<"thTerm OF GP = "<<sum<<endl;

    return 0;
}


