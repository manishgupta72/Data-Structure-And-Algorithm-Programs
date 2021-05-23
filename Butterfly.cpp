#include <iostream>
using namespace std;

int main()
{
	int n,j;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int sp=2*n-2*i;
		for(j=1;j<=i;j++)
		{
          cout<<"*";
		}
		for(j=1;j<=sp;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
          cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--)
	{
		int sp=2*n-2*i;
		for(j=1;j<=i;j++)
		{
          cout<<"*";
		}
		for(j=1;j<=sp;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
          cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}