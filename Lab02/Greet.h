#ifndef Greet_h
#define Greet_h
// We should include <string> here
#include <string>
using namespace std;
// Implement your "greet" function below

void greet(string name, void (*func)(string) ){
    
    func(name);
	
	//found out how to do this via cprogramming.com
}
#endif /* Greet_h */