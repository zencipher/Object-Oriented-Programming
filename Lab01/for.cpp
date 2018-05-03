#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline (cin, str);
	
	int num;
	cin >> num;
	
	for(int i = 0; i < num; i++){
		cout << str << endl;
	}
	return 0;
}

	