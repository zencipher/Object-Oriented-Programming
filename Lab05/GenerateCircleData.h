#ifndef GenerateCircleData_h
#define GenerateCircleData_h

#include "Vec.h"

void generateCircleData(std::vector<Vec*>& points, const Vec& center, float radius, int resolution){
    // Clear the points vector to make sure it's empty before you start
    points.clear();
    
    // Provide the rest of the code here...
	
	const double PI = 3.14159;
	double angle = 0;
	double dangle = PI*2.0/resolution;
	for(int i = 0; i < resolution; i++){
	    Vec* vec = new Vec(center.getX() + radius*cos(angle), center.getY() + radius * sin(angle));
		points.push_back(vec);
		angle+=dangle; 
	}
    
}

#endif