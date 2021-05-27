#include<iostream>
using namespace std;

int main()
{
	int n,m,sum=0,sum1=0;
	cin>>n>>m;
	int arr[n][m],ar[n][m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i]==arr[j])
				sum+=arr[i][j];

		
		}
	}
    

    
    cout<<"Transpose of Matrix:\n";
  
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		ar[i][j]=arr[j][i];
    	}
    }
   
   for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		cout<<ar[i][j]<<"\t";
    	}
    	cout<<endl;
    }
    cout<<"sum="<<sum<<endl;
    // cout<<"sum1="<<sum1<<endl;
	return 0;
}