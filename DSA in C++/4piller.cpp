// Encapsulaton
// #include <iostream>
// using namespace std;
// class Raza
// {
// private:
//     string name;
//     int age=23;

// public:
//     int getage()
//     {
//         return age;
//     }
// };
// int main()
// {
//     Raza r1;
//     cout << "The age of the person is = " << r1.getage() << endl;
//     return 0;
// }
// Inheritance
// #include <iostream>
// using namespace std;
// class Human
// {
// protected:
//     string name;
//     int age = 23;
//     int height = 2;

// public:
//     int getage()
//     {
//         return age;
//     }
// };
// class Male :public Human
// {
// public:
//     int educatein = 12;
// };
// int main()
// {
//     Male obj1;
//     // cout << obj1.height << endl;
//     cout << "The age of the person " << obj1.educatein << endl;
//     return 0;
// }
// multilevel inheritance
// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     int age;
//     string color = "Blue ";
//     int heignt;
// };
// class Dog : public Animal
// {
// public:
//     int noteeth;
//     void setteeth(int teeth)
//     {
//         this->noteeth = teeth;
//     }
//     int getteeth()
//     {
//         return noteeth;
//     }
// };
// class CV : public Dog
// {
// public:
//     int legs;
//     // cout << "The name of the " << endl;
// };
// int main()
// {
//     CV obj1;
//     cout << obj1.age << endl;
//     cout << obj1.heignt << endl;
//     obj1.setteeth(32);
//     cout << "Number of teeth = " << obj1.getteeth() << endl;
//     cout << "The legs " << obj1.legs << endl;
//     return 0;
// }
// Multiple inheritance
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int age=12;
// };
// class B
// {
//     public:
//     int size =123;

// };
// class C:public A, public B
// {
//   public:
//   int number=1232;
// };
// int main()
// {
//     C obj1;
//     cout<<"The age = "<<obj1.age<<endl;
//     cout<<"The size = "<<obj1.size<<endl;
//     cout<<"The number = "<<obj1.number<<endl;
//     return 0;
// }
// Hirarcical  inheritance
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int age=12;
// };
// class B:public A
// {
//     public:
//     int size =123;

// };
// class C:public A

// {
//   public:
//   int number=1232;
// };
// int main()
// {
//     A obj1;
// cout<<obj1.age<<endl;
//  B obj2;
//  cout<<obj2.age<<endl;
//  cout<<obj2.size<<endl;
//  C obj3;
// cout<<obj3.number<<endl;
// cout<<obj3.age<<endl;

//     return 0;
// }
// Inheritance ambiguity
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     void fun()
//     {
//         cout << "I am a " << endl;
//     }
// };
// class B
// {
// public:
//     void fun()
//     {
//         cout << "i am b " << endl;
//     }
// };
// class C : public A, public B
// {
// public:
//     void funcc()
//     {
//         cout << " i am c " << endl;
//         A::fun();
//         B::fun();
//     }
// };
// int main()
// {
//     C obj1;
//     obj1.funcc();
//     obj1.A::fun();
//     obj1.B::fun();

//     return 0;
// }

// polymorphism
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     int a;
//     void operator+(A &obj)
//     {
//         int vlaue1 = this->a;
//         int vlaue2 = obj.a;
//         cout << vlaue2 - vlaue1 << endl;
//     }
// };

// int main()
// {
// A obj1,obj2;
// obj1.a=3;
// obj2.a=6;
// obj2+obj1;
//     return 0;
// }
#include<iostream>
using namespace std;
class A
{
    public:
    void speak()
    {
        cout<<"I am speaking "<<endl;
    }
};
class B :public A
{
public:
void speak()
{
    cout<<"No i bark "<<endl;
    A::speak();
}
};
int main()
{
    B obj1;
    obj1.speak();
    return 0;
}