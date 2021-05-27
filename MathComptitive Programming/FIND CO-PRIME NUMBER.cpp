#include<iostream>
using namespace std;

int main()
{
    int a1,a2,hcf;
    cin>>a1>>a2;
    if(a1>a2)
        hcf=a1;
    else
        hcf=a2;
    while(true)
    {
        if((a1%hcf==0)&&(a2%hcf==0))
            break;
        else
            hcf--;
    }
    cout<<"HCF OF ("<<a1<<","<<a2<<") = "<<hcf<<endl;
  if(hcf==1)
     cout<<"("<<a1<<","<<a2<<") = Is Co-Prime Number"<<endl;
 else
    cout<<"("<<a1<<","<<a2<<") = Is Not Co-Prime Number"<<endl;

    return 0;
}


