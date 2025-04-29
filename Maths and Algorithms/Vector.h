#pragma once
class Vector
{
public:
	float x, y, z;
	Vector(float X, float Y, float Z)
	{
		x = X;
		y = Y;
		z = Z;
	}
	float Magnitude();


	void Normalise();

	void Scale(float Scaler);

	float Dot(Vector& B);
	Vector Cross(Vector& B);

};

