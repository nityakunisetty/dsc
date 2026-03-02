#include<iostream>
using namespace std;
class BankAccount {
    int accno;
    string name;
    string contact;
    double balance;
public:
    BankAccount(int a, string n, string c, double b) {
        accno = a;
        name = n;
        contact = c;
        balance = b;
    }
    friend class AccountManager;
};
class AccountManager {
public:
    void display(BankAccount a) {
        cout << "\nAccount Number: " << a.accno << endl;
        cout << "Customer Name: " << a.name << endl;
        cout << "Contact Number: " << a.contact << endl;
        cout << "Current Balance: " << a.balance << endl;
    }
    void deposit(BankAccount &a) {
        double amt;
        cout << "Enter money to deposit: ";
        cin >> amt;
        a.balance += amt;
        cout << "Deposit successful\n";
    }
    void withdraw(BankAccount &a) {
        double amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;

        if(amt > a.balance) {
            cout << "Insufficient balance\n";
        }
        else {
            a.balance -= amt;
            cout << "Withdrawal successful\n";
        }
    }
    void checkBalance(BankAccount a) {
        cout << "Current Balance: " << a.balance << endl;
    }
    void update(BankAccount &a) {
        cout << "Enter new customer name: ";
        cin >> a.name;
        cout << "Enter new contact number: ";
        cin >> a.contact;
        cout << "Account details updated successfully.\n";
    }
};

int main() {
    int accno;
    string name, contact;
    double balance;
    cout << "Enter account number: ";
    cin >> accno;

    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter contact number: ";
    cin >> contact;

    cout << "Enter initial balance: ";
    cin >> balance;
    BankAccount b(accno, name, contact, balance);
    AccountManager m;
    
    int ch;
do {
    cout << "\n----- Banking Management System -----\n";
    cout << "1. Display account details\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Balance inquiry\n";
    cout << "5. Update account details\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
    cin >> ch;

    switch(ch) {

        case 1:
            m.display(b);
            break;

        case 2:
            m.deposit(b);
            break;

        case 3:
            m.withdraw(b);
            break;

        case 4:
            m.checkBalance(b);
            break;

        case 5:
            m.update(b);
            break;

        case 6:
            cout << "Exiting program\n";
            break;

        default:
            cout << "Invalid choice\n";
    }

} while(ch != 6);

return 0;
}
