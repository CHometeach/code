#include <iostream>

using namespace std;

class Linked_List {
	public:
		typedef struct node {
			int data;
			struct node *next;
		}Node;
		Node *root;
		Linked_List() {
			root = NULL;
		}
		Node *getNode(int data) {
			Node *newNode = (Node *) malloc(sizeof(Node));
			newNode->data = data;
			newNode->next = NULL;
			return newNode;
		}

		void appendNode(Node *p) {
			Node *pointer;
			if(isEmpty()) {
				root = p;
				// cout << "ha" << endl;
			}
			else {
				// cout << "ha2" << endl;
				pointer = root;
				// cout << "ha3" << endl;
				while(pointer->next != NULL) {
					// cout << "ha4" << endl;
					pointer = pointer->next;
					// cout << "ha5" << endl;
				}
				// cout << "ha6" << endl;
				pointer->next = p;
				// cout << "ha7" << endl;
			}
			// cout << "n end" << endl;
		}
		void insert(Node *p) {
			
		}

		bool isEmpty() {
			if(root == NULL) {
				return true;
			}
			else {
				return false;
			}
		}

		Node* traverse(){
			Node *p;
			if(isEmpty()) {
				return NULL;
			}
			else {
				p = root;
				while(p->next != NULL) {
					cout << p->data << " -> ";
					p = p->next;
				}
			}
			cout << "NULL" << endl;
			return 0;
		}
		// void appendNode();
		// bool isEmpty();
		// Node *traverse();
};




// bool Linked_List::isEmpty() {
// 	if(root == NULL) {
// 		return true;
// 	}
// 	else {
// 		return false;
// 	}
// }


