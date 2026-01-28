#include <iostream>
using namespace std;
class Student {
private:
    int marksa, marksb, marksc;
public:
    void getmarks(int a, int b, int c) {
        marksa = a;
        marksb = b;
        marksc = c;
    }
    int sum() {
        return marksa + marksb + marksc;
    }
    float avg() {
        return sum() / 3.0;
    }
    float percentage() {
        return (sum() / 300.0) * 100;
    }
};
int main() {
    Student s1, s2, s3;
    s1.getmarks(70, 90, 30);
    cout << "Student 1 Average: " << s1.avg() << endl;
    cout << "Student 1 Percentage: " << s1.percentage() << "%" << endl;

    s2.getmarks(80, 85, 75);
    cout << "Student 2 Average: " << s2.avg() << endl;
    cout << "Student 2 Percentage: " << s2.percentage() << "%" << endl;

    s3.getmarks(60, 70, 80);
    cout << "Student 3 Average: " << s3.avg() << endl;
    cout << "Student 3 Percentage: " << s3.percentage() << "%" << endl;

    return 0;
}
