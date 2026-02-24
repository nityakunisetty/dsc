#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
class LinkedList{
	private :
		Node* head;
	public :
		LinkedList(){
			head = NULL;	
		}
		void insertatbeggining(int a){
			Node* newNode = new Node();
			newNode->data=a;
			newNode->next=head;
			head = newNode;
		}
		void insertattheend(int a){
			Node* newNode = new Node();
			newNode->data=a;
			newNode->next=NULL;
			
			if(head==NULL){
				head=newNode;
				return;
			}
			Node* temp = head;
			while(temp->next!=NULL){
			temp = temp->next;
			}
			temp->next=newNode;		
		}
		void display(){
			Node* temp = head;
			while (temp != NULL){
				cout << temp->data << " -> ";
				temp=temp->next;
			}
			cout << "NULL" << endl;
		}
		int displaysum(){
			int sum = 0;
			Node * temp = head;
			while (temp != NULL){
				sum += temp->data;
				temp = temp->next;
			}
			return sum;
		}
};
int main(){
	LinkedList list;
	
	list.insertatbeggining(10);
	list.insertattheend(20);
	list.insertattheend(30);
	list.insertattheend(40);
	list.insertattheend(50);
	list.insertattheend(60);
	
	list.display();
	cout << "sum = "<< list.displaysum() << endl;
	
	return 0;
}
