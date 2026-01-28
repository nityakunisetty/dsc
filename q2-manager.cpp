#include <iostream>
using namespace std;
class Employee {
public:
	int empid;
    string name;
    float basicsalary;
    
    void getemployeedetails(int a, string b, float c) 
	{
        empid=a;
        name=b;
        basicsalary=c;
    }

    float calculatesalary() 
	{
        return basicsalary;
    }

    void displayemployeedetails() 
	{
        cout << "ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicsalary << endl;
    }
};

class Manager : public Employee
 {
private:
    float allowance;

public:
    void getmanagerdetails(float a) 
	{
        allowance = a;
    }

    float calculatesalary()
	 {
        return basicsalary+allowance;
    }

    void displaymanagerdetails() {
        displayemployeedetails();
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << calculatesalary() << endl;
    }
};
int main() {
    Manager m;
    m.getemployeedetails(92, "nitya", 25000);
    m.getmanagerdetails(5000);
    m.displaymanagerdetails();
    return 0;
}

