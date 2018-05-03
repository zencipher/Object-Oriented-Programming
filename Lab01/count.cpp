#include <fstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	int counter = 0;
	string str;
	string word ;
	ifstream myReadFile("words.txt");
	cin >> word;
	
	while (myReadFile >> str) {
		if(str == word)
			++counter;
	}
	cout << counter;
	
	//myReadFile.close();
	return 0;
}