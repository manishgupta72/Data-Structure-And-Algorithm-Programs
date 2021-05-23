#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        int sp=2*row-i;
        for(int j=1;j<=row-i;j++)
        {
            cout<<" ";    
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
     
     for(int i=row;i>=1;i--)
    {
        int sp=2*row-i;
        for(int j=1;j<=row-i;j++)
        {
            cout<<" ";    
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    
    return 0;
}

