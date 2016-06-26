#include "linked_list.h"

int main(int argc, char const *argv[]) {
	Linked_List *list = new Linked_List;
    // Linked_List::Node *n1 = ;
    // Linked_List::Node *n2 = ;
    // Linked_List::Node *n3 = list->getNode(4);
    list->appendNode(list->getNode(2));
    list->appendNode(list->getNode(3));
    list->appendNode(list->getNode(4));
    list->appendNode(list->getNode(5));
    list->appendNode(list->getNode(7));

	// list.appendNode(list.getNode(3));
	// list.appendNode(list.getNode(4));
	// list.appendNode(list.getNode(5));
	list->traverse();
	return 0;
}