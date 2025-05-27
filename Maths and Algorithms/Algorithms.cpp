#include "Algorithms.h"

//Start Here
namespace Algorithms
{
	inline int* BubbleSort(int* Data, size_t Size)
	{
		for (int j = Size; j > 0; j--)
		{
			for (int i = 0; i < j - 1; i++)
			{
				if (Data[i] > Data[i + 1])
				{
					int Temp = Data[i];
					Data[i] = Data[i + 1];
					Data[i + 1] = Temp;
				}
			}
		}
		return Data;
	}
}