#include "misVectores.h"

Vector2D::Vector2D(void) { // No-args constructor.
	x = 0;
	y = 0;
}

Vector2D::Vector2D(const Vector2D & vec) { // Copy constructor.
	x = vec.x;
	y = vec.y;
}

Vector2D::Vector2D(double X, double Y) {
	x = X;
	y = Y;
}

Vector2D::~Vector2D(void) { // Destructor. 
}

double Vector2D::Abs(void) {
	return sqrt(x*x + y*y);
}

void Vector2D::SetXY(double X, double Y) {
	x = X;
	y = Y;
}

Vector2D & Vector2D::operator=(const Vector2D & vec) {
	x = vec.x;
	y = vec.y;
	return *this;
}

/*Vector2D Vector2D::operator*(const Vector2D & vec) { // Implements cross product.
	Vector2D result;
	
	result.x = (this->y)*vec.z - (this->z)*vec.y;
	result.y = (this->z)*vec.x - (this->x)*vec.z;
	
	return result;
}*/

Vector2D Vector2D::operator+(const Vector2D & vec) {
	Vector2D result;
	
	result.x = (this->x) + vec.x;
	result.y = (this->y) + vec.y;
	
	return result;
}

Vector2D Vector2D::operator-(const Vector2D & vec) {
	Vector2D result;
	
	result.x = (this->x) - vec.x;
	result.y = (this->y) - vec.y;
	
	return result;
}

Vector2D Vector2D::operator*(const double & c) {
	Vector2D result;
	
	result.x = (this->x)*c;
	result.y = (this->y)*c;
	
	return result;
}

Vector2D Vector2D::operator/(const double & c) {
	Vector2D result;
	
	result.x = (this->x)/c;
	result.y = (this->y)/c;
	
	return result;
}

double Vector2D::Dot(const Vector2D & vec) { // Implements dot product.
	return (this->x)*vec.x + (this->y)*vec.y;
}

double Vector2D::GetX(void) {
	return x;
}
double Vector2D::GetY(void) {
	return y;
}

