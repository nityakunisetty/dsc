#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
class linkedlist {
private:
    node* head;

public:
    linkedlist() {
        head = NULL;
}
    void insertatend(int value) {
        node* newnode = new node();
        newnode->data = value;
        newnode->next = NULL;
        if(head == NULL) {
            head = newnode;
            return;
        }
        node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    void display() {
        if(head == NULL) {
            cout << "List is empty";
            return;
        }

        node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "null";
    }
};

int main() {
    linkedlist list;
    list.insertatend(10);
    list.insertatend(15);
    list.insertatend(20);
    list.display();
    return 0;
}
