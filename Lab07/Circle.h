#ifndef circle_h
#define circle_h

class Circle {
	
	private:
		double x;
		double y;
		double r;

	public:
		float area;
		Circle (){
			x = 0;
			y = 0;
			r = 1;
			area = 3.14159 * (r * r);
		}
		
		Circle (double x, double y, double r){
			this->x = x;
			this->y = y;
			this->r = r;
			area = 3.14159 * (this->r * this->r);
		}

		
		double getX()  {
			return x;
		}
		double getY()  {
			return y;
		}
		double getR()  {
			return r;
		}
		
		void setX(double x) {
			this->x = x;
		}
		void setY(double y) {
			this->y = y;
		}
		void setR(double r) {
			this->r = r;
			area = 3.14159 * (this->r * this->r);
		}
};
	

#endif