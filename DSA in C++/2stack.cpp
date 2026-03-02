#include<iostream>
using namespace std;
class Stack
{
    public:
    int size;
    int top1;
    int top2;
    int *arr;
    Stack(int data)
    {
        this->size=data;
        top1=-1;
        top2=size;
        arr=new int [size];
    }
    void push1(int dataa)
    {
        if (top2-top1>1)
        {
            top1++;
            arr[top1]=dataa;
        }
        else
        {
            cout<<"The stack is overflow "<<endl;
        }
        
    }
    void push2(int dataa)
    {
        if (top2-top1>1)
        {
            top2--;
            arr[top2]=dataa;
        }
        else
        {
            cout<<"The stack is overflow "<<endl;
        }
        
    }
    void pop1()
    {
        if (top1>=0)
        {
            top1--;
        }
        else
        {
            cout<<"The stack is underflow "<<endl;
        }
        
    }
    void pop2()
    {
        if (top2<size)
        {
            top2++;
        }
        else
        {
            cout<<"The stack is underflow "<<endl;
        }
        
    }
    int gettop1()
    {
        if (top1>=0)
        
        {
            int ans=arr[top1];
            return ans;
        }
        
    }
    int gettop2()
    {
        if (top2<size)
        
        {
            int ans=arr[top2];
            return ans;
        }
        
    }
    bool empty()
    {
        if (top1<0&& top2>size)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
int main()
{
    Stack st1(5);
    st1.push1(1);
    st1.push1(2);
    st1.push1(3);
    st1.push2(5);
    st1.push2(4);
    cout<<st1.gettop1()<<endl;
    cout<<st1.gettop2()<<endl;
    st1.pop1();
    cout<<st1.gettop1()<<endl;
    st1.push2(6);
    st1.push2(7);
    cout<<st1.gettop2()<<endl;
    st1.pop1();
    st1.pop1();
    st1.pop1();
    st1.pop1();
    st1.pop2();
    st1.pop2();
    st1.pop2();
    st1.pop2();
    cout<<"The "<<endl;
    cout<<st1.gettop2()<<endl;
    return 0;
}