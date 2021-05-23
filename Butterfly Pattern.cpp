#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int sp=2*n-2*i;
		for(int j=1;j<=sp;j++)
		{
          cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}