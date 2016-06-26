#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class Stack {
	public:
		vector<string> v;
		void push(string c);
		void pop();
		string top();
		bool is_empty();

};
void Stack::push(string c) {
	v.push_back(c);
}
void Stack::pop() {
	if (is_empty()) {
		cout << "is empty" << endl;
	}
	else {
		// cout << v.back() << endl;
		v.pop_back();
	}
}
string Stack::top() {
	if (is_empty()) {
		return "\0";
	}
	else {
		return v.back();
	}
}
bool Stack::is_empty() {
	return v.empty();
}