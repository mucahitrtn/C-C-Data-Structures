

#include <iostream>
#include <queue>
using namespace std;

class Node {

	public:
		int data;
		Node* left;
		Node* right;

};

Node* getNewNode(int x) {

	Node* newNode = new Node();
	newNode->data = x;
	newNode->left = newNode->right = NULL;

	return newNode;
}


Node* Insert(Node* root, int data){

	if (root == NULL) {
		root = getNewNode(data);
	}
	else if (data <= root->data) {
		root->left = Insert(root->left, data);
	}
	else {
		root->right = Insert(root->right, data);
	}

	return root;
}

bool search(Node* root, int data) {

	if (root == NULL) return false;
	else if (root->data == data) return true;
	else if (data <= root->data)
		return search(root->left, data);
	else
		return search(root->right, data);

}

void findMax(Node* root) {

	if (root->right != NULL) {
		findMax(root->right);
	}
	else
		cout<<"Max:" << root->data<<endl;

}
void findMin(Node* root) {

	if (root->left != NULL) {
		findMin(root->left);
	}
	else
		cout<<"Min: " << root->data<<endl;

}

int findHeight(Node* root) {

	if (root == NULL) {
		return -1;
	}
	else {
		int left = findHeight(root->left);
		int right = findHeight(root->right);

		int height = (left < right) ? right + 1 : left + 1;
		return height;
	}

}

class Nodech {

	public:
		char data;
		Nodech* left;
		Nodech* right;
};
Nodech* getNewNode(char x) {

	Nodech* newNode = new Nodech();
	newNode->data = x;
	newNode->left = newNode->right = NULL;

	return newNode;
}
   
void levelOrder(Nodech* root) {

	if (root == NULL) {
		return;
	}
	queue <Nodech*> Q;
	Q.push(root);
	while (!Q.empty()) {
		Nodech* current = Q.front();
		Q.pop();
		cout << current->data << " ";
		if (current->left != NULL) Q.push(current->left);
		if (current->right != NULL) Q.push(current->right); 
	}

}

Nodech* insertch(Nodech* root, char data) {

	if (root == NULL) {
		root = new Nodech();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if (data <= root->data) {
		root->left = insertch(root->left, data);
	}
	else {
		root->right = insertch(root->right, data);
	}

	return root;
}
 

int main()
{
	/*Node* root;
	root = NULL;
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 25);
	root = Insert(root, 20);
	root = Insert(root, 30);
	root = Insert(root, 50);
	root = Insert(root, 301);
	root = Insert(root, 1000);
	root = Insert(root, 7);
	root = Insert(root, 5);*/

	/*if (search(root, 5) == true)
		cout << "Bulundu. " << endl;
	else
		cout << "Bulunamadi. ";*/

	//findMax(root);
	//findMin(root);

	//int height = findHeight(root);
	//cout << height;

	Nodech* rootch;
	rootch = NULL;

	rootch = insertch(rootch, 'M');
	rootch = insertch(rootch, 'B');
	rootch = insertch(rootch, 'Q');
	rootch = insertch(rootch, 'Z');
	rootch = insertch(rootch, 'A');
	rootch = insertch(rootch, 'C');

	levelOrder(rootch);

}
