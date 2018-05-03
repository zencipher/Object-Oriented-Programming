#include <iostream>
#include <string>

using namespace std;

int main() {
	//string pair;
	char c;
	int num;
	while(num != -2){
		cin >> c >> num;
		if(num == -1){
		    cout << "\n";
		}
		else {
		    for(int i = 0; i < num; i++){
		        cout << c;
		    }
		}
	}
	
}