#include "Vector.h"
#include "Maths.h"

float Vector::Magnitude()
{
	float temp=MathUtils::Pythagoras(x, y, z);
	return temp;
}


void Vector::Normalise()
{

}


void Vector::Scale(float Scaler)
{
}


float Vector::Dot(Vector& B)
{
	return 0;
}


Vector Vector::Cross(Vector& B)
{
	return *this;
}
