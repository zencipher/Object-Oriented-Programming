#define Vec_h

#include <string>
using namespace std;

class Vec {
	
	public:
	    float x,y;
		Vec(float x,float y){
		    this->x = x;
		    this->y = y;
		}
		Vec(){
		    this->x = 0;
		    this->y = 0;
		}
        
		void setX(float x) {
			this->x = x;
		}
		float getX() const{
			return this->x;
		}
		void setY(float y){
			this->y = y;
		}
		float getY() const{
			return y;
		}
		void add(Vec v){
		    this->x +=v.getX();
		    this->y+= v.getY();
			
		}
		
		void print(){
		    cout << "(" << x << " ," << y << ")";
		}
};


