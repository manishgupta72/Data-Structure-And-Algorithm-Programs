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
int DecimalToBinary(int n)
{
	int ans=0;
	int x=1;
	while(x<=n)
	{
		x*=2;
	}
	while(x>0)
	{
		int lastdigit=n/x;
		 n-=lastdigit*x;
	   x/=2;
	   ans=ans*10+lastdigit;
	  	
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

int DecimalToOctol(int n)
{
	int ans=0,x=1;
	while(x<=n)
	{
		x*=8;
	}
	x/=8;
	while(x>0)
	{
		int lastdigit=n/x;
		n-=lastdigit*x;
		x/=8;
		ans=ans*10+lastdigit;
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

string DecimalToHexa(int n)
{
	int x=1;
	string ans="";
	while(x<=n)
	{
		x*=16;
	}
	x/=16;
	while(x>0)
	{
		int lastdigit=n/x;
		n-=lastdigit*x;
		x/=16;
		if(lastdigit<=9){
		ans=ans+to_string(lastdigit);
	    }
	    else
	    {
	    	char c='A' +lastdigit-10;
	    	ans.push_back(c);
	    }
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
	cin>>n;
	cout<<DecimalToHexa(n);

	return 0;
}