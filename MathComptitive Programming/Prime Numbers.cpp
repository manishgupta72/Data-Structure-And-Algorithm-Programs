#include<iostream>
using namespace std;
bool Prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
       {
           return false;
       }
       else
       {
           return true;
       }
    }
}
void Prime2(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
       c++;
    }
    if(c==2){
        cout<<n<<" Is a Prime Number:";
    }
    else{
        cout<<n<<" Is Not a Prime Number:";
    }
}
void Prime3(int n)
{
    int c=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            if(i*i==n)
             c++;
        else
            c+=2;
    }
    }
    if(c==2){
        cout<<n<<" Is a Prime Number:";
    }
    else{
        cout<<n<<" Is Not a Prime Number:";
    }
}
int main()
{
    int n;
    cin>>n;
    //bool isPrime=Prime(n);
    Prime3(n);
//    if(isPrime==true){
//        cout<<n<<" Is a Prime Number:";
//    }
//    else{
//        cout<<n<<" Is Not a Prime Number:";
//    }

    return 0;
}
