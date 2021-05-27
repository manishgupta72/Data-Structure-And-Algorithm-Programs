#include<iostream>
using namespace std;

int main()
{
    int a1,a2,lcm;
    cin>>a1>>a2;
    if(a1>a2)
        lcm=a1;
    else
        lcm=a2;
    while(true)
    {
        if((lcm%a1==0)&&(lcm%a2==0))
            break;
        else
            lcm++;
    }
    cout<<"LCM OF ("<<a1<<","<<a2<<") = "<<lcm<<endl;

    return 0;
}
