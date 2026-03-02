#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter the value of the n = ";
    cin>>num;
    for ( i = 2; i < num; i++)
    {
        if (num%i!=0)
        {
            cout<<"This is a prime number  "<<endl;
        }
        
        
    }
    
    return 0;
}