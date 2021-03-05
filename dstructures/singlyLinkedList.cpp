
#include <iostream>

using namespace std;



class Node
{
	public:
		int data;
		Node* next;
};
	
Node* head;


void insert(int x) {

	Node* temp = new Node();
	temp->data = x;
	temp->next =head;
	head = temp;
}
void print() {
	Node* temp = head;

	cout << "The list is= ";
	while (temp != NULL) {

		cout << temp->data<<"  ";
		temp = temp->next;

	}

}

void inserttoindex(int x, int index) {

	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;

	if (index== 1) {

		temp->next = head;
		head = temp;
		return;
	}
	Node* temp1 = head;
	for (int i = 0; i < index - 2; i++) {

		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;

}
void Delete(int n) {

	Node* temp3 = head;

	if (n == 1) {

		head = temp3->next;
		free(temp3);

	}

	for (int i = 0; i < n - 2; i++) {

		temp3 = temp3->next;

	}
	Node* temp2 = temp3->next;
	temp3->next = temp2->next;
	free(temp2);
}

void Reverse() {
	Node* nexttemp;
	Node* current = head;
	Node* prev = NULL;
	while (current!= NULL) {

		nexttemp = current->next;
		current->next = prev;
		prev = current;
		current = nexttemp;

	}
	head = prev;

}
void PrintReverse(Node* p) {
	
	if (p == NULL)return;


	PrintReverse(p->next);
	cout << p->data<<", ";
	

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

	int n;
	cin>> n;

	for (int i = 0; i < n; i++) {
		int number;
		cin >> number;
		insert(number);
		print();
		cout << endl;
	}
	
	inserttoindex(100, 2);

	print();
	cout << endl;
	Delete(2);

	print();
	cout << endl;
	cout << "reverse";
	Reverse();

	print();
	cout << endl;
	cout << "recursion reverse";
	PrintReverse(head);

	print();
	print();
	print();
	print();
	print();
	cout << endl;
	return 0;
}

