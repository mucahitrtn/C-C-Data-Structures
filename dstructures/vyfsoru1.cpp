#include <iostream>
#include<vector>
using namespace std;

class Node{

	public:
		int data;
		Node* left;
		Node* right;

};

class LinkedList
{
public:
	int data;
	LinkedList* next;
};

LinkedList* head;

void Linkedlistinsert(int x) {

	LinkedList* temp = new LinkedList();
	temp->data = x;
	temp->next = head;
	head = temp;
}




Node* getNewNode(int data) {
	
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;

	return newNode;
}

void ldr(Node* root) {
	
	
	if (root == NULL) return;
	ldr(root->right);
	Linkedlistinsert(root->data);
	ldr(root->left);

}
void postorder(Node* root) {

	if (root == NULL) return;

	postorder(root->left);
	postorder(root->right);
	Linkedlistinsert(root->data);

}
void preOrder(Node* root) {
	if (root == NULL) return;

	Linkedlistinsert(root->data);
	preOrder(root->left);
	preOrder(root->right);
}


//cout << arr[0] << "  " << arr[arr.size() - 1];

Node* insert(Node* root, int data) {

	if (root == NULL) {
		root = getNewNode(data);
	}
	else if (data <= root->data) {
		root->left = insert(root->left, data);
	}
	else {
		root->right = insert(root->right, data);
	}

	return root;
}

void print() {
	LinkedList* temp = head;
	int sag=0, sol=0;
	if (temp == NULL) {
		cout << " Empty \n";
		return;
	}

	sol = temp->data;
	
	while (temp != NULL) {

		sag = temp->data;
		temp = temp->next;

	}

	cout << sol << " " << sag;
}


int main()
{
	head = NULL;
	Node* root = NULL;

	root = insert(root, 5);
	root = insert(root, 15);
	root = insert(root, 25);
	root = insert(root, 35);
	root = insert(root, 45);
	root = insert(root, 55);
	root = insert(root, 65);
	root = insert(root, 75);

	cout << "ldr: ";
	ldr(root);
	print();
	
	cout << endl;
	cout << "postorder: ";
	postorder(root);
	print();

	cout << endl;
	cout << "PreOrder: ";
	preOrder(root);
	print();

	cout << endl;

}

