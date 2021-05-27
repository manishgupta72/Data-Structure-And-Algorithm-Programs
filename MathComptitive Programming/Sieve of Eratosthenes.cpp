#include<iostream>

using namespace std;
//void SieveOfEvatosthenes(int n)
//{
//
//    string isPrime[n+1];
//    fill(isPrime,isPrime+n,"Prime");
//    isPrime[0]="Not Prime";
//    isPrime[1]="Not Prime";
//    for(int i=2;i*i<=n;i++)
//    {
//        for(int j=2*i;j<=n;j+=i){
//            isPrime[j]="Not Prime";
//        }
//    }
//    for(int i=0;i<=n;i++)
//    {
//        cout<<i<<" "<<isPrime[i]<<endl;
//    }
//}
void SieveOfEvatosthenes(int n)
{

    int isPrime[n+1]={0};
    for(int i=2;i<=n;i++){
    if(isPrime[i]==0){
        for(int j=i*i;j<=n;j+=i){
            isPrime[j]=1;
        }
    }
    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i]==0)
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    SieveOfEvatosthenes(n);

    return 0;
}
