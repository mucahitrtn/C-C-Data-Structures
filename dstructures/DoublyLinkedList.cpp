#include <iostream>


using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;

};

Node* head;

Node* getNewNode(int x) {

	Node* temp= new Node();
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;

	return temp;
}

void insertAtHead(int x) {

	Node* temp = getNewNode(x);

	if (head == NULL) {

		head = temp;
		return;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;

}
void Print() {

	Node* temp = head;
	cout << "Doubly linked list: ";
	while (temp != NULL) {

		cout << temp->data<<", ";
		temp = temp->next;

	}
	cout << endl;

}

void ReversePrint() {

	Node* temp = head;
	if (temp == NULL)
			return;

	while (temp->next != NULL) {
		temp = temp->next;
	}
	cout << "Reversed: ";
	while (temp != NULL) {
		cout << temp->data;
		temp = temp->prev;
	}

	cout << endl;

}





int main()
{
	head = NULL;

	insertAtHead(2);
	insertAtHead(3);
	insertAtHead(4);
	insertAtHead(5); 
	Print(); 
	ReversePrint();
	insertAtHead(6);
	insertAtHead(7);
	insertAtHead(8); 
	insertAtHead(8);
	insertAtHead(8);
	insertAtHead(8);
	insertAtHead(8);
	insertAtHead(8);
	insertAtHead(8);
	Print(); 
	ReversePrint();


}

