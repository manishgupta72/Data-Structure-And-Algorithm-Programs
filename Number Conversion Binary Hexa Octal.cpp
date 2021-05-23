#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n)
{
	int ans=0;
	int x=1;
	while(n>0)
	{
		int remaider=n%10;
		ans+=x*remaider;
		x*=2;
		n/=10;
	}
	return ans;
}

int OctalToDecimal(int n)
{
	int ans=0;
	int x=1;
	while(n>0)
	{
		int remaider=n%10;
		ans+=x*remaider;
		x*=8;
		n/=10;
	}
	return ans;
}

int HexaToDecimal(string n)
{
	int ans=0;
	int x=1;
	int size=n.size();
	for(int i=size-1;i>=0;i--)
	{
		if(n[i]>='0' && n[i]<='9')
		{
			ans+=x*(n[i]-'0');
		}	
		else if(n[i]>='A' && n[i]<='F')
		{
			ans+=x*(n[i]-'A'+10);
		}
		x*=16;
	}
	return ans;
}

string DecimalToBOD(int num,int base)
{
   string result="";
   string bases="0123456789ABCDEF";
   while(num>0)
   {
   	result=bases[num%base]+result;
   	num/=base;
   }
   return result;
}

int main()
{
	int  n,b;
	cin>>n>>b;
	cout<<DecimalToBOD(n,b);

	return 0;
}