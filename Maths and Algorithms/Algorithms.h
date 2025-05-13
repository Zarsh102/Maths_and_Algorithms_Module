#pragma once
namespace Algorithms
{
    inline int * BubbleSort(int* Data, size_t Size)
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


    inline int * InsesrtionSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline int * SelectionSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline int * HeapSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline int * MergeSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline int * QuickSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline int * BinSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline bool LinierSearch(int* Data, size_t Size, int target)
	 {
		 return false;
	 }


    inline bool BinarySearch(int* Data, size_t Size, int target)
	 {
		 return false;
	 }
}

