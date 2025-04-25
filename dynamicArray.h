#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include <iostream>
using namespace std;

template <typename T>
class DynamicArray{
        T* array;   
        int currentMaxNumElements;   
        int currentNumElementsStored;   
        
        void resize(const int newsize);

    public:

        DynamicArray();
        DynamicArray(T*, int, int);
        DynamicArray(const DynamicArray& rhs);
        ~DynamicArray() ;
        
        DynamicArray& operator=(const DynamicArray& rhs);
        
        int getCurrentNumElementsStored() const;
        int getCurrentMaxNumElements() const;

        void addElementToEndOfArr(const T& newitem);
        T getElementAtIndex(const int i)const;
        void replaceElementAtIndex(int i, T newItem);
        void removeElementAtIndex(int i);
        void clearArray();
        
        friend ofstream& operator<<(ofstream& out, DynamicArray arr);
};
#include "dynamicArray.cpp"
#endif