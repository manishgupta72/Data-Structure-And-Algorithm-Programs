#include<iostream>
#include<array>
#include<string.h>
using namespace std;

//bool Palindrome(long long n)
//{
//    long long rem=0,rev=0,temp;
//    temp=n;
//    while(temp!=0)
//    {
//        rem=temp%10;
//        rev=(rev*10)+rem;
//        temp/=10;
//    }
//    if(rev==n)
//    return true;
//    else
//    return false;
//}
//bool STRPalindrome(array<string,100>str)
//{
//    array<string,100>rem,rev,temp;
//    int j=0;
//
//    array<string,100>::iterator ptr;
//      int len=ptr.end()-1;
//    temp=str;
//    for(auto i=ptr.begin();i<=ptr.end();i++)
//
//    {
//     rev[++j]=temp[len];
//     len--;
//    }
//    if(rev==str)
//    return true;
//    else
//    return false;
//}

bool STRPalindrome(string str)
{
    int j=str.length()-1;
    char temp[j];
    string result=str;

    for(int i=0; i<str.length(); i++)
    {
        temp[j]=str[i];
        j--;
    }
    int len=strlen(temp);
    for(int i=0; i<len; i++)
    {
        result[i]=temp[i];
    }

    if(result==str)
        cout<<str<<" Is A Palindrome String:";
    else
        cout<<str<<" Is Not A Palindrome String:";
}
int main()
{
    string str;
    cin>>str;
    STRPalindrome(str);

    return 0;
}
