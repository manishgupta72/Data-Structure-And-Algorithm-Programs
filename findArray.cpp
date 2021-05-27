#include <bits/stdc++.h>

using namespace std;

void insert(int arr[],int n)
{
    
    
        int value;
        cin>>value;
       arr[n]=value;
    
}
 
 void print(int arr[],int n)
 {
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 }

 void Search(int arr[],int n)
 {
    int value,c=0;
   
    cin>>value;
    for(int i=0;i<n;i++)
    {c++;
        if(arr[i]==value)
        {
         cout<<"\nValid value! Value At="<<i<<endl;
         cout<<"iteration="<<c<<endl;
         exit(0);
        }
         else
         {}   
    }
    cout<<"Value Not Exist in Array:"<<endl;
 }

int BinarySerch(int arr[],int n)
{
    int c=0;
    
    int value;
    cin>>value;
    int f=0;
    int l=n-1;
    int mid;
    while(f<=l)
    {
       
      mid=(l+f)/2;
       c++;
      if(arr[mid]==value)
      {
        return mid;
      }

      if(arr[mid]<value)
      {
        f=mid+1;
      }
      else   {
        l=mid-1;
      }
      cout<<c<<endl;
    }

    return -1;
}
 int main()
 {
 	int n,len;
 	cin>>n;
    int arr[n];
 // len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        insert(arr,i);
    }
 	
 	print(arr,n);

    Search(arr,n);
    /*int result=BinarySerch(arr,n);
    if(result==-1)
     cout<<"Not Exist Value in Array!Thank You";
 	else   
    cout<<"\nValue At Index="<<result<<endl;*/
    return 0;
 }