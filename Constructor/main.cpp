#include <iostream>

using namespace std;

class outbreak
{
    int a,b;
public:
    outbreak(void);
    void output(int,int);
};
outbreak::outbreak(void)
{
    a = 0;
    b = 0;
}
void  outbreak::output(int x,int y)
{
    a = x;
    b = y;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
}

int main()
{
    outbreak a,b,c;
    cout<<"Object 1 "<<endl;
    a.output(300,700);
    cout<<"\nObject 2 "<<endl;
    b.output(900,200);
    cout<<"\nObject 3 "<<endl;
    c.output(600,800);

}
