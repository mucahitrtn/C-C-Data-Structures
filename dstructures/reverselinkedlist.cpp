#include <iostream>

using namespace std;

class Node {

	public:
		int data;
		Node* next;

};

Node* head;
//Node* getnewNode(int x) {
//	Node* temp = new Node();
//	temp->data = x;
//	temp->next = NULL;
//
//	return temp;
//}

void insert(int x) {

	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;

}

//void reverse() {
//	Node* temp;
//	Node* current = head;
//	Node* prev = NULL;
//	
//	while (current != NULL) {
//
//		temp= 
//
//	}
//
//}

void print() {
	Node* temp = head;

	cout << "The list is= ";
	while (temp != NULL) {

		cout << temp->data << "  ";
		temp = temp->next;

	}

}

void PrintReverse(Node* p) {

	if (p == NULL)return;


	PrintReverse(p->next);
	cout << p->data << "  ";


}

void ReverseRecursion(Node* p) {

	if (p->next == NULL) {

		head = p;
		return;
	}
	ReverseRecursion(p->next);
	Node* temp = p->next;
	temp->next = p;
	p->next = NULL;

}


int main()
{
    
	head = NULL;

	insert(53);
	insert(51);
	insert(58);
	insert(62);
	insert(63);
	insert(55);
	insert(15);

	print();
	cout << endl << endl;
	PrintReverse(head);
	ReverseRecursion(head);
	cout << endl << endl;
	print();

}

