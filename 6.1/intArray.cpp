// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				implementering af klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include "IntArray.h"


IntArray::IntArray(int size)
{
	arraySize_ = (size>0 ? size : 10);

	arrayPtr_ = new int[arraySize_];
	// arrayPtr_ = NULL;

	if (arrayPtr_ == NULL)					// sikrer at programmet afsluttes hvis det IKKE lykkes at allokere hukommelsen.
	{										
		throw MemoryAllocationException(true);
	}

	for (int i = 0; i<arraySize_; i++)
		arrayPtr_[i] = 0;
}


void IntArray::setArraySize(int size)
{
	if (size <= 0)
	{
		cout << "\nChanging arraysize: Cannot change size to " << size << ". Size must be positive. No changes made.\n";
		return;
	}

	if (size == arraySize_)
	{
		cout << "\nChanging arraysize: Array already have size " << size << ". No changes made.\n";
		return;
	}

	if (size > arraySize_)
	{
		cout << "\nChanging arraysize. Increase size to " << size << ".\n";

		int *tempPtr = arrayPtr_;

		arrayPtr_ = new int[size];
		// arrayPtr_ = NULL;

		if (arrayPtr_ == NULL)					// sikrer at ingen ændringer foretages hvis det IKKE lykkes at allokere hukommelsen.
		{
			arrayPtr_ = tempPtr;
			throw MemoryAllocationException(false);
		}

		for (int i = 0; i<arraySize_; i++)
			arrayPtr_[i] = tempPtr[i];

		for (int i = arraySize_; i<size; i++)
			arrayPtr_[i] = 0;

		arraySize_ = size;

		delete[] tempPtr;
	}

	if (size < arraySize_)
	{
		cout << "\nChanging arraysize. Decrease size to " << size << ". Some date will be lost.\n";

		int *tempPtr = arrayPtr_;

		arrayPtr_ = new int[size];
		// arrayPtr_ = NULL;

		if (arrayPtr_ == NULL)					// sikrer at ingen ændringer foretages hvis det IKKE lykkes at allokere hukommelsen.
		{
			arrayPtr_ = tempPtr;
			throw MemoryAllocationException(false);
		}

		for (int i = 0; i<size; i++)
			arrayPtr_[i] = tempPtr[i];

		arraySize_ = size;

		delete[] tempPtr;
	}
}


int IntArray::getArraySize() const
{
	return arraySize_;
}


void IntArray::insertNumber(int number, int index)
{
	if (index >= 0 && index < arraySize_)
	{
		arrayPtr_[index] = number;
	}
}


void IntArray::print() const
{
	cout << endl;

	for (int i = 0; i<arraySize_; i++)
		cout << arrayPtr_[i] << " ";

	cout << endl;
}


IntArray::~IntArray()
{
	delete[] arrayPtr_;
}