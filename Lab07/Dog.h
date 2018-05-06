#ifndef LA4_Dog_h
#define LA4_Dog_h

#include "Animal.h"

#include <iostream>
#include <string>
#include <vector>

class Dog : public Animal {
   
public:
	Dog(string name, int age){
		cout << "Creating Dog" << endl;
        setName(name);
        setAge(age);
	}
	~Dog(){
		cout << "Deleting Dog" << endl;
	}
	void feed(){
		cout << "A bone, please!" << endl;
	}
	
};

#endif