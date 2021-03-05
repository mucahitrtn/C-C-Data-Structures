#include <iostream>

using namespace std;

class Node {

	public:
		char data;
		Node* left;
		Node* right;
};

void preOrder(Node* root) {
	if (root == NULL) return;

	cout << root->data<< " ";
	preOrder(root->left);
	preOrder(root->right);
}
void inorder(Node* root) {

	if(root == NULL) return;

	inorder(root->left);
	cout << root->data<<" ";
	inorder(root->right);

}
void postorder(Node* root) {

	if (root == NULL) return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data<< " ";

}

Node* getnewnode(char x) {

	Node* newNode = new Node();
	newNode->data = x;
	newNode->left = newNode->right = NULL;

	return newNode;
}

Node* insert(Node* root, char x) {

	if (root == NULL) {
		root = getnewnode(x);
	}
	else if(x <= root->data) {
		root->left = insert(root->left, x);
	}
	else{
		root->right = insert(root->right, x);
	}


	return root;
}

int main()
{
	Node* root;
	root = NULL;

	root = insert(root, 'F');
	root = insert(root, 'D');
	root = insert(root, 'J');
	root = insert(root, 'B');
	root = insert(root, 'E');
	root = insert(root, 'G');
	root = insert(root, 'K');
	root = insert(root, 'A');
	root = insert(root, 'H');
	root = insert(root, 'I');
	root = insert(root, 'C');

	cout << "postorder: ";
	postorder(root);
	cout << endl;
	cout << "inorder: ";
	inorder(root);
	cout << endl;
	cout << "preorder: ";
	preOrder(root);

}

