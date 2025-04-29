#pragma once
#include <math.h>
namespace MathUtils
{
	const double pi = 3.14159625358979323846;
	static float toRad(float Deg)
	{
		return (Deg * pi) / 180;
	}
	static float toDeg(float Rad)
	{
		return (180 * Rad) / pi;
	}

	static float Pythagoras(float A, float B)
	{
		float C = A * A + B * B;
		return sqrt (C);
	}
	static float Pythagoras(float A, float B, float D)
	{
		float C = A * A + B * B + D * D;
		return sqrt(C);
	}
	static float FindSinTheta(float A, float B)
	{
		float C = A / B;
		return asin(A / B);
	}
	static float FindCosTheta(float A, float B)
	{

		return acos(A / B);
	}
	static float FindTanTheta(float A, float B)
	{
		return atan(A / B);
	}

	static float FindHyp(float Angle, float B)
	{

		return 0.0f;
	}
	static float FindOpp(float Angle, float B)
	{
		return 0.0f;
	}
	static float FindAdj(float Angle, float B)
	{
		return 0.0f;
	}


}

