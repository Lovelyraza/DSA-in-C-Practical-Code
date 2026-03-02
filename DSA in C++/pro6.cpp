#include<iostream>
using namespace std;
int main()
{
    int i,j,num,count = 1;
    cout<<"Enter the number = ";
    cin>>num;
    for ( i = 0; i < num; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            cout<<count<<" ";
        count= count+1;
        }
        cout<<endl;
    }
    
    return 0;
}