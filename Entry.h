#ifndef Greet_h
#define Greet_h

#include <string>
using namespace std;


struct Entry {

    string firstName;     
    string lastName;      
    string email;          
    
    // The constructor
    Entry(){
        firstName = "";
        lastName = "";
        email = "";
    }
    
    Entry (string fName, string lName, string address){
        firstName = fName;
        lastName = lName;
        email = address;
    }
    
    // Some getters and setters
    string getFirstName(){
        return firstName;
    }
	
	string getLastName(){
        return lastName;
    }
	
	string getEmail(){
        return email;
    }
    
    void setName(string fName){
        firstName = fName;
    }
	
	void setLastname(string lName){
        lastName = lName;
    }
	
	void setEmail(string address){
        email = address;
    }
	
	 void print (){
        cout << "First Name: " <<firstName << endl;
        cout << "Last Name: "<<lastName << endl;
        cout << "Email: " << email << endl;
        
    }
    
    
}myEntry;

#endif /* Greet_h */