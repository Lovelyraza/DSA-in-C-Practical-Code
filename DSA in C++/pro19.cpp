#include<iostream>
using namespace std;
class operation
{
private:
int num,sum=0,pro=1,digit,ans;
public:
void productsum()
{
    cout<<"Enter the number = ";
    cin>>num;
    while (num!=0)
    {
        digit=num%10;
        pro= pro*digit;
        sum=sum+digit;
        num=num/10;
    }
    ans= pro-sum;
    cout<<"The ans is = "<<ans<<endl;
    
}
};
int main()
{
    operation obj1;
    obj1.productsum();
    return 0;
}