#ifndef _MISVECTORES_H_
#define _MISVECTORES_H_

#include <math.h> 

class Vector2D {
private:
	double x, y;

public:
	// Constructors.
    Vector2D(void);
	Vector2D(const Vector2D &);
	Vector2D(double X, double Y);
	~Vector2D(void);
	// Methods.
	double Abs(void);
	void SetXY(double, double);
	double GetX(void);
	double GetY(void);
	double Dot(const Vector2D & ); // Implements dot product.
	// Operators.
	//Vector2D & operator=(const Vector2D &);
	//Vector2D operator*(const Vector2D &); // Implements cross product.
	Vector2D operator+(const Vector2D &);
	Vector2D operator-(const Vector2D &);
	Vector2D operator*(const double &);
	Vector2D operator/(const double &);
	Vector2D & operator=(const Vector2D &);
};

#endif