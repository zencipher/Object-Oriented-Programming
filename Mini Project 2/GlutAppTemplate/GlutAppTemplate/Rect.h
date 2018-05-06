#define Rect_h

#include <string>
using namespace std;

class Vec {

public:
	float x, y;
	Vec(float x, float y) {
		this->x = x;
		this->y = y;
	}
	Vec() {
		this->x = 0;
		this->y = 0;
	}

	void setX(float x) {
		this->x = x;
	}
	float getX() const {
		return this->x;
	}
	void setY(float y) {
		this->y = y;
	}
	float getY() const {
		return y;
	}
	void add(Vec v) {
		this->x += v.getX();
		this->y += v.getY();

	}

	void print() {
		cout << "(" << x << " ," << y << ")";
	}
};


class Rect {
public:
	float x, y, width, height;

	Rect(float x, float y, float width, float height) {
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;
	}

	Rect() {
		this->x = 0;
		this->y = 0;
		this->width = 0;
		this->height = 0;
	}

	void setX(float x) {
		this->x = x;
	}
	float getX() const {
		return this->x;
	}
	void setY(float y) {
		this->y = y;
	}
	float getY() const {
		return y;
	}
	void setWidth(float width) {
		this->width = width;
	}
	float getWidth() const {
		return width;
	}
	void setHeight(float height) {
		this->height = height;
	}
	float getHeight() const {
		return height;
	}

	bool contains(Vec poop) {
		if (poop.getY() < y && poop.getY() > (y - height) && poop.getX() < (x + width) && poop.getX() > x) {
			return true;
		}
		return false;
	}

};


