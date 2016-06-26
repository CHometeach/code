#include <iostream>
#include <cstdlib>

using namespace std;

class Stack {
	public:
		int array[100];
		int top;
		Stack () {
			top = 0;
		}
		void push(int n);
		int pop();
};
void Stack::push(int n) {
	if (top == 99) {
		cout << "stack is full!" << endl;
	}
	else {
		cout << "push successfully!" << endl;
		array[top] = n;
		top++;
	}
}

int Stack::pop() {
	if (top == 0) {
		cout << "stack is empty!" << endl;
		return -1;
	}
	else {
		cout << array[top-1] << endl;
		top--;
		return array[top+1];
	}
}