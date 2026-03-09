#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class linkedlist {
private:
    node* head;

public:
    linkedlist() {
        head = NULL;
    }

    void insertatbeg(int value) {
        node* newnode = new node();
        newnode->data = value;
        newnode->next = head;
        head = newnode;
    }

    void display() {
        if(head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool search(int value) {
        node* temp = head;

        while(temp != NULL) {
            if(temp->data == value)
                return true;

            temp = temp->next;
        }

        return false;
    }
};

int main() {

    linkedlist l1;

    l1.insertatbeg(10);
    l1.insertatbeg(20);
    l1.insertatbeg(30);
    l1.insertatbeg(40);

    cout<<"Linked List: ";
    l1.display();

    int value;
    cout<<"Enter value to search: ";
    cin>>value;

    if(l1.search(value))
        cout<<"Value found in linked list"<<endl;
    else
        cout<<"Value not found"<<endl;

    return 0;
}
