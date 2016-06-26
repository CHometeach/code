#include "stack_cpp_string.h"

int main(int argc, char const *argv[])
{
	Stack stack;
	stack.pop();
	stack.pop();
	stack.push("+");
	stack.pop();
	stack.push("-dsf");
	stack.push("/");
	stack.pop();
	stack.push("*dsda");
	stack.push("3dsafad");
	stack.pop();
	stack.pop();
	stack.push("(");
	stack.pop();
	stack.push(")dsf");
	stack.pop();
	stack.pop();
	stack.push("1sdaf");
	cout << stack.top() << endl;

	return 0;
}