#include "DataStructures.h"

template <typename T>
void Stack<T>::Push(T data)
{
	Data[Top] = data;
	Top = Top + 1;
}

template <typename T>
T Stack<T>::Peek()
{
	return Data[Top - 1];
}

template <typename T>
T Stack<T>::Pop()
{
	Top = Top - 1;
	return Data[Top];
}

template <typename T>
void Queue<T>::Push(T data)
{
	Data[Top] = data;
	Top = Top - 1;
}

template <typename T>
T Queue<T>::Peek()
{
	return Data[0]
}

template <typename T>
T Queue<T>::Pop()
{

}

template<typename T>
inline void MinimumBinaryHeap<T>::Add(T DataToAdd)
{
	if (Root == nullptr)
	{
		return;
	}

	while (Root == nullptr)
	{

	}
}

template<typename T>
inline T MinimumBinaryHeap<T>::Remove()
{
	return T();
}

template<typename T>
inline void MinimumBinaryHeap<T>::HeapifyUp()
{

}

template<typename T>
inline void MinimumBinaryHeap<T>::HeapifyDown()
{

}