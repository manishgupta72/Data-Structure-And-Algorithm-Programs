#include<iostream>
using namespace std;

bool Pytho(int x,int y,int z)
{
	int a=max(x,max(y,z));
	int b,c;

	if(a==x)
	{
		b=y;
		c=z;
	}
	else if(a==y)
	{
		b=x;
		c=z;
	}
	else
	{
		b=x;
		c=y;
	}
	if(a*a==b*b+c*c)   //if(x*x+y*y==z*z) also use this
		return true;
	else
		return false;
}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
    
    if(Pytho(x,y,z))
    {
    	cout<<"Pythogorian Tripplet Number:"<<endl;
    }
    else
    {
    	cout<<"Not Pythogorian Tripplet Number:"<<endl;
    }

	return 0;
}