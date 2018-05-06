#include <iostream>
#include "Dog.h"
#include "display.h"

#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

 
int main (int argc, const char *argv[]) {
    int num;
    cin >> num;
    
    string type;
    string name;
    int age;
    
    vector<Animal*> anim;
     
    for (int i = 0; i < num; i++) {
        cin >> type >> name >> age;
        
        if(type == "A"){
            Animal* newAnim = new Animal();
            newAnim->setAge(age);
            newAnim->setName(name);
            anim.push_back(newAnim);
        }
        else if(type == "D") {
            Dog* dog = new Dog(name, age);
            anim.push_back(dog);
        }
    }
    display(anim);
     
    return 0;

}


