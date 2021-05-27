#include<iostream>
using namespace std;

int main()
{
	int n,m,sum=0,sum1=0;
	cin>>n>>m;
	int arr[n][m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i]==arr[j])
				sum+=arr[i][j];
			if(i+j==n-1)
				sum1+=arr[i][j];		
		}
	}
    

    for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
    cout<<"sum of diagonal Matrix="<<sum<<endl;
    cout<<"sum of AntiDiagonal Matrix
    ="<<sum1<<endl;
	return 0;
}