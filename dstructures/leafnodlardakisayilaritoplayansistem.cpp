#include <iostream>
#include <vector>
using namespace std;

// A Binary Tree Node
struct Node
{
	int data;
	struct Node* left, * right;
};

class list {

	public:
		int info;
		list* next;
	
};

list* head;

void insert(int x) {

	list* temp = new list();
	temp->info = x;
	temp->next = head;
	head = temp;
}


void printLeafNodes(Node* root)
{
	
	// if node is null, return
	if (!root)
		return;

	// if node is leaf node, print its data    
	if (!root->left && !root->right)
	{
		cout << root->data << " ";
		insert(root->data);
		return;
	}

	// if left child exists, check for leaf 
	// recursively
	if (root->left)
		printLeafNodes(root->left);

	// if right child exists, check for leaf 
	// recursively
	if (root->right)
		printLeafNodes(root->right);
}


void printsum(){
	
	list* temp = head;
	int sum = 0;
	int count = 0; 
	while (temp->next != NULL) {
		count++;
		sum = sum + temp->info;
		temp= temp->next;
	}

	count++;
	sum = sum + temp->info;
	cout << "Toplam leaf node sayisi: " << count << " Toplam: " << sum;
}

// Utility function to create a new tree node
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Driver program to test above functions
int main()
{

	head = NULL;

	// Let us create binary tree shown in 
	// above diagram
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(12);
	root->right->left = newNode(5);
	root->right->right = newNode(8);
	root->right->left->left = newNode(6);
	root->right->left->right = newNode(7);
	root->right->right->left = newNode(9);
	root->right->right->right = newNode(10);

	// print leaf nodes of the given tree
	printLeafNodes(root);
	
	printsum();

	return 0;
}
