#ifndef Participant_h
#define Participant_h
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include "Sortable.h"

using namespace std;

class Participant : public Sortable{

	public:
		//static bool(*comp)(const Participant*, const Participant*);

		string name;
		int age;
		double score;


		Participant(){
			name = " ";
			age = 0;
			score = 0.0;
		}

		Participant(string n, int a, double s){
			name = n;
			age = a;
			score = s;
		}

		virtual bool compare(const Sortable * s){
			//Learned Dynamic Casting from former student
			
			const Participant *obj = dynamic_cast<const Participant*>(s);
			if (obj){
				if (score < obj->score)
					return false;
				
				if(score == obj->score){
					if(age < obj->age)
						return true;
						
					if(age == obj->age){
					    if(name < obj->name)
					        return true;
					   else 
					    return false;
					}
				
					else
						return false;
				}
				else
					return true;
			
			}
			else
				return false;
		}

		virtual void print(){
			cout << name << "\t" << age << "\t" << score << endl;
		}



};

#endif