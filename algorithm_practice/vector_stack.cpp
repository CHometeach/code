#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
	vector<int> ivector;
	char command[15];
	for (;;) {
		int len, n, val;
		char c;
		string command_str;
		cin.getline(command, 15, '\n');
		command_str = command;
		if (command[1] == 'u') {
					len = command_str.size();
					len = len - 5;
					for (int i = 0; i < len; i++) {
						c = command[5+i];
						sscanf(&c, "%d", &n);
						for (int j = i+1; j <= len; j++) {
							n = n * 10;
						}
						n = n / 10;
						val = val + n; 
					}
					cout << "val = " << val << endl;
					ivector.push_back(val);
					val = 0;
					n = 0;
		}
		else if (command[1] == 'o') {
			cout << ivector.back() << endl;
			ivector.pop_back();
		}
	}
	return 0;
}