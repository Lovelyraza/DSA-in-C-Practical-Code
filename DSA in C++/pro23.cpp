#include<iostream>
using namespace std;
void power(int a,int b)
{
    int i,sum=a;
    for ( i = 1; i <=b; i++)
    {
       sum=sum*b; 
    }
    cout<<"The power of a of b is = "<<sum<<endl;
    
}
int main()
{
    int a,b;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter the power of a = ";
    cin>>b;
    power(a,b);
    return 0;
}