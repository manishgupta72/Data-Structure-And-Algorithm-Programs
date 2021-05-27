#include<iostream>
#define MAX 500
using namespace std;
int multiply(int x,int res[],int res_size);

void factorial(int n)
{
    int res[MAX];
    //initialize resutl
    res[0]=1;
    int res_size=1;
    //Apply simple factorial formula n!=1*2*3*4*5.....*n
    for(int x=2;x<=n;x++)
    {
        res_size= multiply(x,res,res_size);
    }
    cout<<"Factorial of Given Number is \n";
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }
}
//This Function multiplies x with the number
//represented by res[];
//number represented by res[].This function uses simple
//school mathematics for multiplication .
//this function may value of res_size and returns the
//new value of res_size

int multiply(int x,int res[],int res_size)
{

    int carry=0;    //Initialize carry
    //one by one myltiply n with individual digits of res[]
    for(int i=0;i<res_size;i++)
    {
        int prod=res[i]*x+carry;
        //Store last digit of 'prod' in res[]
        res[i]=prod%10;

        //put rest in carry
        carry=prod/10;

    }
    //put carry in res and increase result size
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}
//driver program
int main()
{
    factorial(6);

    return 0;
}
