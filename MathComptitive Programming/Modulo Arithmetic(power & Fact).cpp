#include<iostream>
using namespace std;

//static long long PowerOfNumber(long long a,long long b)
//{
//    long long p=a;
//    for(int i=1;i<b;i++)
//    {
//        p=p*a;
//    }
//    return p;
//}
  long long  FastPower(long long a,long long b,int n)
{
     long long result=1;
    while(b>0)
    {
        if((b&1)!=0){
            result=(result*a%n)%n;
        }
        a=((a%n)*(a%n))%n;
        b=b>>1;
    }
    return result;
}
int main()
{
//     long long a,b;
//    cin>>a>>b;
//    long long result=PowerOfNumber(a,b);
    cout<<FastPower(3978432,5,1000000007);



 return 0;
}

