#include<iostream>
using namespace std;
int Trailfact(int n)
{
    int res=0;
    for(int i=5; i<=n; i*=5)
    {
        res=res+n/i;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<Trailfact(n);

    return 0;
}
