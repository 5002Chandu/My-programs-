#include <iostream>
using namespace std;

class BatchD {
    int x, y;

public:
    // Default constructor
    BatchD() {
        cout << "Welcome to the program of programs" << endl;
    }

    // Parameterized constructor
    BatchD(int a, int b) {
        x = a;
        y = b;
        cout << "Value of a and b are: " << x << " and " << y << endl;
    }

    // Copy constructor
    BatchD(const BatchD &objk) {
        x = objk.x;
        y = objk.y;
        cout << "It is copying things from the existing object" << endl;
        cout << "Values of x and y in k are: " << x << " and " << y << endl;
    }
};

int main() {
    BatchD obj1;
    BatchD obj2(19, 20);
    BatchD obj3 = obj2;

    return 0;
}