#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void run1(){
        cout<<"A function "<<endl;
    }
};
class B: public A{
    public:
    void run2(){
        cout<<"B function "<<endl;
    }
};
class C: public B{
    public:
    void run3(){
        cout<<"C function "<<endl;
    }
};
int main(){
    A obj1;
    obj1.run1();
    B obj2;
    obj2.run1();
    obj2.run2();
    C obj3;
    obj3.run1();
    obj3.run2();
    obj3.run3();
}