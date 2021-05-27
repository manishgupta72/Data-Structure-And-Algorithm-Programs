#include<iostream>
using namespace std;

int main()
{
    int a1,cmp=0;
    cin>>a1;
    for(int i=1;i<=a1;i++)
    {
        if(a1%i==0)
        {
          cmp++;
        }
        else
        {

        }
    }
     if(cmp>=3)
     cout<<a1<<" IS COMPOSITE NUMBER "<<endl;
     else
     cout<<a1<<" IS NOT COMPOSITE NUMBER "<<endl;
    return 0;
}


