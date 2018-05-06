#ifndef Circle_h
#define Circle_h

#include<iostream>

using namespace std;

class Circle: public Sortable {
	public:
		int x;
		Circle(){
			x = 0;
		}
		
		Circle(int radius){
			x = radius;
		}
		bool compare(const Sortable *s){
		    const Circle *obj = dynamic_cast<const Circle*>(s);

			if (obj){
				if (x < obj->x)
					return true;
				else
					return false;
			}
			else
				return false;
		}
		
		void print (){
			
			cout << "Circle with radius: " << x << endl;
		}
		
};
#endif
