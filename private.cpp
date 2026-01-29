#include<iostream>
using namespace std;
int main(){
      class Silicon_Valley{
        private:
        int employees;
        int revenue;
        Silicon_Valley(int e, int r){
            employees = e;
            revenue = r;
           
        };
        void display(){
            cout << "Employees: " << employees ;
            cout << "Revenue: " << revenue;
        };
    };
    Silicon_Valley google(23,45);
    google.display();   
}