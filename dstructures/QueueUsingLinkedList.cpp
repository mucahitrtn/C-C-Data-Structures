#include <iostream>

using namespace std;


class Queue {
	public:
		int data;
		Queue* next;

};
Queue* front = NULL;
Queue* rear = NULL;

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

void print() {
	Queue* temp = front;

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
	Enqueue(12); 
	Enqueue(15);
	Enqueue(19); 
	Enqueue(5);
	Enqueue(17); 
	Enqueue(9);
	Enqueue(1);
	Enqueue(25);
	Enqueue(39);
	Enqueue(110);
	Dequeue();  
	print();
	Dequeue();
	Dequeue();
	print();

	
}

