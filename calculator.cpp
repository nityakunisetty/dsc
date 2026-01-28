#include <iostream>
using namespace std;
class Calculator {
public:
    float a, b;
    void read() {
        cout << "Enter values: ";
        cin >> a >> b;
    }
    float Addition() {
        return a + b;
    }
    float Subtraction() {
        return a - b;
    }
    float Multiply() {
        return a * b;
    }
    float Div() {
        return a / b;
    }
};

int main() {
    Calculator C1;
    C1.read();
    cout << "Add is: " << C1.Addition() << endl;
    cout << "Sub is: " << C1.Subtraction() << endl;
    cout << "Mul is: " << C1.Multiply() << endl;
    cout << "Div is: " << C1.Div() << endl;
    return 0;
}
