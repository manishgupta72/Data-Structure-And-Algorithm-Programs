#include<iostream>
using namespace std;

int main()
{
    int a1,a2,hcf,lcm,a,b,temp;
    cin>>a1>>a2;
    a=a1;
    b=a2;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    lcm=(a1*a2)/hcf;
    cout<<"HCF OF ("<<a1<<","<<a2<<") = "<<hcf<<endl;
    cout<<"LCM OF ("<<a1<<","<<a2<<") = "<<lcm<<endl;

    return 0;
}


