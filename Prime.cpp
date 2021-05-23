#include <iostream>
using namespace std;
bool isPrime(int n)
{
	if(n==1)
			return false;
	for(int i=2;i<n;i++)
	{
		
		if(n%i==0)
		{

			return false;
		}
	}
	return true;
}
int main()
{
	int s,e,i,count=0;
	cin>>s>>e;
	for(i=s;i<=e;i++){
	if(isPrime(i))
	{
     cout<<i<<" ";
     count++; 
	}	
}
cout<<"\ntotal"<<count;
	return 0;
}