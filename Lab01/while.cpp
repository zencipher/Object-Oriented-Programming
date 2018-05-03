#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	
	while(num >= 0){
		if(num % 2 == 0){
			cout << "EVEN";
			cin >> num;
		}
		else{
			cout << "ODD";
			cin>>num;
		}
	}
	return 0;
	
}