#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* head;

void push(int val) {

	Node* temp = new Node();
	temp->data = val;
	temp->next = head;
	head = temp;
}

void pop() {

	if (head == NULL) {
		cout << "Stack Underflow" << endl;
	}
	else {
		cout << "Popped Element: " << head->data << endl;
		head = head->next;
	}

}

void print() {
	Node* temp;
	if (head == NULL) {
		cout << "Stack is empty";
	}
	else {

		temp = head;
		cout << "Elements: ";
		while (temp != NULL) {

			cout << temp->data << " ";
			temp = temp->next;
		}
	}
	cout << endl;
}

int main()
{
	head = NULL;

	push(5);
	push(12);
	push(15);
	push(19);
	push(21);
	push(78);
	push(99);

	print();

	pop();
	pop();

	print();

}

