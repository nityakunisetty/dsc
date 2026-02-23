#include<iostream>
using namespace std;
struct node {
		int data;
		node *next;
};
class linkedlist {
	private:
		node*head;
		public:
			linkedlist() {
				head=NULL;
			}
			void insertatbeginning(int value) {
			node *newnode= new node();
			newnode->data=value;
			newnode->next=head;
			head=newnode;
		}
		void display() {
			if(head==NULL) {
				cout<<"list is empty ";
			}
			node*temp=head;
			while(temp!=NULL) {
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"null";
		}
};

int main () {
	linkedlist list;
	list.insertatbeginning(10);
	list.insertatbeginning(15);
	list.insertatbeginning(15);
	list.display();
	return 0;
}

