// listedenkuyruğa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class list {

	public:
		int info;
		list* next;

};

class Queue {

	public:
		int data;
		Queue* next;

};
Queue* front = NULL;
Queue* rear = NULL;
Queue* temp;
list* head;

void Enqueue(int x) {

	Queue* temp = new Queue();

	temp->data = x;
	temp->next = NULL;

	if (front == NULL && rear == NULL) {
		front = rear = temp;
		return;
	}

	rear->next = temp;
	rear = temp;

}

void inserttoList(int x) {

	list* temp = new list();
	temp->info = x;
	temp->next = head;
	head = temp;
}

void printlist() {
	list* temp = head;
	cout << "Linked List: ";
	while (temp->next != NULL) {

		cout << temp->info << " ";
		Enqueue(temp->info);
		temp = temp->next;
	}
	cout << temp->info;
	Enqueue(temp->info);

}

void print() {
	Queue* temp = front;
	cout << "Kuyruk: ";
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;

	}
	cout << endl;
}
void Dequeue() {
	Queue* temp = front;
	if (front == NULL) {
		printf("Queue is Empty\n");
		return;
	}
	if (front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	free(temp);
}

int main()
{
	head = NULL;
	
	inserttoList(59);
	inserttoList(51);
	inserttoList(52);
	inserttoList(53);
	inserttoList(55);
	inserttoList(54);
	inserttoList(56);
	inserttoList(57);
	inserttoList(58);

	

	printlist();
	cout << endl << endl;
	print();
	Dequeue();
	Dequeue();

}

