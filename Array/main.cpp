#include <iostream>

using namespace std;

int main()
{
    int n,a[100],b[1],c,d,i;
    cout << "Enter total number of elements(1 to 100): ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin>>a[i];
    }
    b[0]=a[0];
    for(i=0; i<n; i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(b[0]>a[i])
        {
            b[0]=a[i];
        }
    }
    cout<<endl;
    cout<<"Largest number is :"<<a[0]<<endl;
    cout<<"Smallest Number is :"<<b[0]<<endl;
}
