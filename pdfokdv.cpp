#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,2,4,5,6};
    int *p = arr;
    for(int i=0;i<5;i++)
    {
        cout << *(p+i);
    }
    return 0;
}