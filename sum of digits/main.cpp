#include <iostream>
using namespace std;
int main()
{
    int a,b,c,r,i;
    cout<<"Enter a Number : ";
    cin>>a;
    b=a;
    r=c=0;
    for(i=0; b>=1; i++)
    {
        r= b%10;
        c= c+r;
        b= b/10;
    }
    cout<<"Sum of Digits of the Number is : "<<c;
    return 0;
}
