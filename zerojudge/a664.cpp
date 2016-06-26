#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_operator(char c);
int priority(char oper);

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

int main(int argc, char const *argv[]) {
	int times;
	cin >> times;
	for (int i = 0; i < times; ++i) {
		Stack stack;
		vector<string> postfix;
		string input;
		string num;
		cin >> input;
		int value;
		int ans;
		for (int j = 0; j < input.size(); ++j) {
			if (is_operator(input[j])) {
				if (stack.is_empty()) {
					stack.push(input.substr(j,1));
				}
				else {
					if (input[j] != '(') {
						if (priority(input[j]) > priority(stack.top()[0])) {
							stack.push(input.substr(j,1));
						}
						else if (input[j] == ')') {
							while(stack.top()[0] != '(') {
								postfix.push_back(stack.top());
								stack.pop();
							}
							stack.pop();
						}
						else {
							while(priority(input[j]) <= priority(stack.top()[0])) {
								if (stack.is_empty()) {
									break;
								}
								else {
								 	postfix.push_back(stack.top());
									stack.pop();
								}
							}
							stack.push(input.substr(j,1));
						}
					}
					else {
						stack.push(input.substr(j,1));
					}
				}
			}
			else {
				if (is_operator(input[j+1]) || j+1 == input.size()) {
					num.append(input.substr(j,1));
					postfix.push_back(num);
					num.clear();
				}
				else {
					num.append(input.substr(j,1));
				}
			}
		}
		while (!stack.is_empty()) {
			postfix.push_back(stack.top());
			stack.pop();
		}
		for (int j = 0; j < postfix.size(); j++) {
			int a, b;
			if (!is_operator(postfix[j][0])) {
				stack.push(postfix[j]);
			}
			else {
				b = stoi(stack.top());
				stack.pop();
				a = stoi(stack.top());
				stack.pop();
				switch (postfix[j][0]) {
					case '+':
						stack.push(to_string(a+b));
						break;
					case '-':
						stack.push(to_string(a-b));
						break;
					case '*':
						stack.push(to_string(a*b));
						break;
					case '/':
						stack.push(to_string(a/b));
						break;
				}
			}
		}
		ans = stoi(stack.top());
		cout << ans << endl;
	}
	return 0;
}

bool is_operator(char c) {
	switch (c) {
		case '+':
			return true;
		case '-':
			return true;
		case '*':
			return true;
		case '/':
			return true;
		case '(':
			return true;
		case ')':
			return true;
	}
	return false;
}

int priority(char oper) {
	switch(oper) {
		case '+': case '-': 
			return 2;
        case '*': case '/': 
        	return 3;
        case '(':
        	return 1;
        default:
        	return 0;
	}
}