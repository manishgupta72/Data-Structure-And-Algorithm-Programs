#include <iostream>
using namespace std;
 int main()

 {
 	int n,sum=0;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>arr[i];
 		sum+=arr[i];
 	}
 	for(auto pr:arr)
 	{
 		cout<<pr<<endl;
 	}
 	for(int i=n-1;i>=0;i--)
 	{
 		cout<<arr[i]<<" ";
 	}
 	cout<<"\nsum="<<sum;
 	return 0;
 }