#include "Vector.h"
#include "Maths.h"

float Vector::Magnitude()
{
	float temp=MathUtils::Pythagoras(x, y, z);
	return temp;
}


void Vector::Normalise()
{
	float Mag = Magnitude();
	x = x / Mag;
	y = y / Mag;
	z = z / Mag;
}


void Vector::Scale(float Scaler)
{
	x = x * Scaler;
	y = y * Scaler;
	z = z * Scaler;

}


float Vector::Dot(Vector& B)
{
	return x * B.x + y * B.y + z * B.z;
}


Vector Vector::Cross(Vector& B)
{
	float cx = (y * B.z) - (z * B.y);
	float cy = (z * B.x) - (x * B.z);
	float cz = (x * B.y) - (y * B.x);
	return Vector(cx, cy, cz);
}
