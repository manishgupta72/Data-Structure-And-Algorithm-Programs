#include <iostream>
#include <cmath>
using namespace std;
// bool isPrime(int n)   //this is O(logn) logic
// {
// 	int c=0;
// 	for(int i=2;i<sqrt(n);i++)
// 	{
// 		c++;
// 		if(n%i==0)
// 		{

// 			return false;
// 		}
// 	}
// 	cout<<"iteration="<<c<<endl;
// 	return true;
// }
bool isPrime(int n)   //this is O(n) logic
{
	int c=0;
	for(int i=2;i<n;i++)
	{
		c++;
		if(n%i==0)
		{

			return false;
		}
	}
	cout<<"iteration="<<c<<endl;
	return true;
}
int main()
{
	int n;
	cin>>n;
	bool result=isPrime(n);
	if(result==true)
	 cout<<"Prime"<<endl;
	else
		cout<<"Not Prime"<<endl;
		return 0;
}