#include<iostream>
using namespace std;
int main(){
      class Silicon_Valley{
        public:
        string product;
        int employees;
        int revenue;
        Silicon_Valley(string p, int e, int r){
            product = p;
            employees = e;
            revenue = r;
            cout << "Constructor called";
        }
        Silicon_Valley(int a, int b){
            cout << "Default Constructor called";
        }
        void display(){
            cout << "Product: " << product << endl;
            cout << "Employees: " << employees << endl;
            cout << "Revenue: " << revenue << " Billion USD" << endl;
        }
    };
    Silicon_Valley google(23,45);   
}