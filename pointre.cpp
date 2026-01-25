#include<iostream>
using namespace std;
int f(int *p){
    *p = 20;
}
int main(){
    int a = 10;
    int * p = &a;
    f(&*p);
    cout<<a;
    return 0;
}