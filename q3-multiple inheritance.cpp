#include <iostream>
#include <string>
using namespace std;
class academicrecord {
public:
	int rollno;
    float marks;
    void getacademicdetails(int r, float m) 
	{
        rollno=r;
        marks=m;
    }

    float getmarks() {
        return marks;
    }

    void displayacademicdetails() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Academic Marks: " << marks << endl;
    }
};

class sportsrecord {
public:
	string sportname;
    float sportsscore;
    void getsportsdetails(string s, float sc) 
	{
        sportname=s;
        sportsscore=sc;
    }

    float getsportsscore() {
        return sportsscore;
    }

    void displaysportsdetails() {
        cout << "Sport Name: " << sportname << endl;
        cout << "Sports Score: " << sportsscore << endl;
    }
};

class student : public academicrecord, public sportsrecord
 {
public:
    float calculateoverallscore() {
        return (marks + sportsscore) / 2;
    }
    void displaystudentdetails() {
        displayacademicdetails();
        displaysportsdetails();
        cout << "Overall Performance Score: "<< calculateoverallscore() << endl;
    }
};
int main() {
    student s;
    s.getacademicdetails(92, 85);
    s.getsportsdetails("Cricket", 90);
    s.displaystudentdetails();
    return 0;
}

