#include<iostream>
#include<string>
using namespace std;
int main() {
    //Class
    class Smartphone{
        public:
        int camera;
        string speaker;
        float size;
        int prize;
        Smartphone(int c, string s){
            camera = c;
            speaker = s;
        }
        void display(){
            cout << "Camera: ";
            cout << "Speaker: ";
        }
    };
    //object
    Smartphone apple(12," Dolby");
    Smartphone samsung(16," AKG");
    }