//Multilevel Inheritence
#include<iostream>
using namespace std;
int main (){
    class A{
        public:
        void display(){
            cout <<"I am in A";
        }
    };
    class B{
        public:
        void print(){
            cout<<"I am in B";
        }
    };
    class C:public B ,public A{
        public:
        void screen(){
            cout<<"I am in C";
        }
    };
    C c;
    c.display();
    return 0;
}