//Name: Sterling Gerard
// Objective: Creating 3 elements that are a linked list that are pointing to one another
// using a Node pointer. Insert a Node in a linked List

#include<iostream>
using namespace std;

class Node
{
	public: 
		int Value;
		Node* Next;
};


void printList(Node* n) {

	while (n!= NULL) {
		cout << n->Value << endl;
		n = n->Next;
	}
}

void insertAtTheFront(Node**head, int newValue) 
{
	// 1. Prepare a newNode
	Node* newNode = new Node();
	newNode->Value = newValue;
	// 2. Put it in front of current head
	newNode->Next = *head;
	// 3. Move head of the list to the point to the newNode
	*head = newNode;
}

int main() {

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->Value = 1;
	head->Next = second;
	second->Value = 2;
	second->Next = third;
	third->Value = 3;
	third->Next = NULL;
	 
	insertAtTheFront(&head, -1);
	printList(head);

	return 0;
	system("pause");
}