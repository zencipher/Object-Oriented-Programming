#ifndef DATA_h
#define DATA_h

#include<vector>
#include<iostream>
#include "Sortable.h"

using namespace std;

class Data {
	private:
		vector<Sortable *> sortable;
		//int count;
	public:
		void add(Sortable *s){
		sortable.push_back(s);
	}
	void sort(){
		int j;
		Sortable * val;
		for(int i = 1; i < sortable.size(); i++){
			val = sortable[i];
			j = i - 1;
              
			while(j >= 0 && val->compare(sortable[j])){
				sortable[j + 1] = sortable[j];
				j = j - 1;
			}
			sortable[j + 1] = val;
		}
	}
	void print(){
		for(int i = 0; i < sortable.size(); i++){
			sortable[i]->print();
		}
	}
		  
};
#endif
