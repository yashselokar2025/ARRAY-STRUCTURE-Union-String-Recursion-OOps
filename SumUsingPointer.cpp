#include <iostream>
using namespace std;

class Sum {
public:
    int calculate(int *a, int *b) {
        return (*a + *b);
    }
};

int main() {
    int x = 7, y = 3;
    Sum obj;

    cout << "Sum = " << obj.calculate(&x, &y) << endl;
    return 0;
}
