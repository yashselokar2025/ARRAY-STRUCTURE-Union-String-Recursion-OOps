#include <iostream>
using namespace std;

class Swap {
public:
    void swapNumbers(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};

int main() {
    int x = 5, y = 10;
    Swap obj;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    obj.swapNumbers(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
