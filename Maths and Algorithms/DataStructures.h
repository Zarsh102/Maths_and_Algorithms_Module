#pragma once
#include <ctype.h>



template <typename T>
class Stack
{
public:
    T* Data = new T[10];
    size_t Size = 10;
    int Top{ 0 };

    T Pop();
    T Peek();
    void Push(T dataToPush);

};

template <typename T>
class Queue
{
public:

    T* Data;
    size_t Size;
    int Top{ 0 };

    T Pop();
    T Peek();
    void Push(T dataToPush);
};


template <typename T>
struct Node
{
    T Data;

    Node* Left;
    Node* Right;
};

template <typename T>
class MinimumBinaryHeap
{

public:
    Node<T>* Root;

    void Add(T DataToAdd);
    T Remove();

    void HeapifyUp(); //bubble Up
    void HeapifyDown(); //Bubble Down;
};

