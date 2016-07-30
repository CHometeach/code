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

		void append(Node *p) {
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

		void insert(Node *p, int index) {
			Node *pointer;
			int counter = 0;
			if(isEmpty()) {
				root = p;
			}
			else {
				pointer = root;
				while(pointer->next != NULL) {
					if (counter == index) {
						p->next = pointer->next;
						pointer->next = p;
						break;
					}
					else{
						counter++;
						pointer = pointer->next;
					}
				}
			}
		}
		void remove(int index) {
			Node *pointer;
			int counter = 0;
			if(isEmpty()) {
				;
			}
			else {
				pointer = root;
				if (pointer->next == NULL ) {
					pointer = NULL;
				}
				else {
					while(pointer->next != NULL) {
						if (counter+1 == index) {
							pointer->next = pointer->next->next;
							break;
						}
						else if (counter == index) {
							root = pointer->next;
							break;
						}
						else{
							counter++;
							pointer = pointer->next;
						}
					}
				}

			}
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
				cout << p->data << " -> ";
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


