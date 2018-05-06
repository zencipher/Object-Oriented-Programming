#include <math.h>
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES

using namespace std;

class Time{

	int hour;
	int min;
	int sec;

	public:
		
		Time(int newHour, int newMin, int newSec){
			hour = newHour;
			min = newMin;
			sec = newSec;
		}
		
		Time(){
			hour = 0;
			min = 0;
			sec = 0;
		}
		
		int getHours(){
			return hour;
		}
		
		int getMinutes(){
			return min;
		}
		
		int getSeconds(){
			return sec;
		}
		
		void add(const Time & t){
			sec += t.sec;
			if(sec > 60){
				min++;
				sec -= 60;
			}
			min += t.min;
			if(min>60){
				hour++;
				min -= 60;
			}

			hour += t.hour;
		}
		
		void getAngles (float& h, float& m, float& s){
			if (hour <= 3) {
				h = (M_PI/2) - ((hour * (M_PI/6)) + (min*(M_PI/360)));
			}
			else if (hour >= 9) {
				h = M_PI - (((hour - 9) * (M_PI/6)) + (min*(M_PI/360)));
			}
			else {
				h = -1*((hour - 3)*(M_PI/6) + (min*(M_PI/360)));
			}

			
			if (min <= 15) {
				m = (M_PI/2) - (min * (M_PI/30));
			}
			else if (min >= 45) {
				m = M_PI - ((min - 45) * (M_PI/30));
			}
			else {
				m = -1*(min - 15) * (M_PI/30);
			}

			if (sec <= 15) {
				s = (M_PI/2) - (sec * (M_PI/30));
			}
			else if (sec >= 45) {
				s = M_PI - ((sec - 45) * (M_PI/30));
			}
			else {
				s = -1*(sec - 15) * (M_PI/30);
			}
		}
		
		void getHourCoords (float& x, float& y) {
			float h = 0;
			if (hour <= 3) {
				h = (M_PI/2) - ((hour * (M_PI/6)) + (min*(M_PI/360)));
			}
			else if (hour >= 9) {
				h = M_PI - (((hour - 9) * (M_PI/6)) + (min*(M_PI/360)));
			}
			else {
				h = -1*((hour - 3)*(M_PI/6) + (min*(M_PI/360)));
			}

			x = cos(h);
			y = sin(h);
		}

		void getMinuteCoords (float& x, float& y) {
			float m = 0;
			if (min <= 15) {
				m = (M_PI/2) - (min * (M_PI/30));
			}
			else if (min >= 45) {
				m = M_PI - ((min - 45) * (M_PI/30));
			}
			else {
				m = -1*(min - 15) * (M_PI/30);
			}

			x = cos(m);
			y = sin(m);
		}

		void getSecondsCoords (float& x, float& y){
			float s = 0;
			if (sec <= 15) {
				s = (M_PI/2) - (sec * (M_PI/30));
			}
			else if (sec >= 45) {
				s = M_PI - ((sec - 45) * (M_PI/30));
			}
			else {
				s = -1*(sec - 15) * (M_PI/30);
			}

			x = cos(s);
			y = sin(s);	
		}

};


