#include <iostream>
using namespace std;
class employee {
private:
    float basicpay, hra, da;
public:
    void setsalary(float a, float b, float c) {
        basicpay = a;
        hra = b;
        da = c;
    }
    float calculategrosssalary() {
        return basicpay + hra + da;
    }
    void displaysalary() {
        cout << "Gross Salary: " << calculategrosssalary() << endl;
    }
};
int main() {
    employee e1, e2, e3;
    cout << "Employee 1" << endl;
    e1.setsalary(20000, 5000, 3000);
    e1.displaysalary();

    cout << "Employee 2" << endl;
    e2.setsalary(25000, 6000, 4000);
    e2.displaysalary();

    cout << "Employee 3" << endl;
    e3.setsalary(30000, 7000, 5000);
    e3.displaysalary();

    return 0;
}
