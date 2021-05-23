#include <iostream>
using namespace std;

string DecimalToBOF(int num,int base)
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
   int  num,base;
   cin>>num>>base;
   cout<<DecimalToBOF(num,base)<<endl;	
	return 0;
}