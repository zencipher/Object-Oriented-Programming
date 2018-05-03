#include <fstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
	int counter = 0;
	string str;
	string word ;
	ifstream myReadFile("words.txt");
	cin >> word;
	
	while (myReadFile >> str) {
		size_t pos = 0;
		size_t size = str.length();
		for(int i = 0; i < str.length(); i++){
		    str[i] = tolower(str[i]);
		    if(ispunct(str[i]))
                  str = str.substr(0,str.length()-1);
		}
		if(str == word){
		    counter++;
		}

		
	}
	cout << counter;
	
	//myReadFile.close();
	return 0;
}