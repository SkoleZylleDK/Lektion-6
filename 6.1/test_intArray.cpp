// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				test-program til klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include "IntArray.h"


int main()
{
	try
	{
		IntArray testObj(5);

		testObj.print();
		testObj.insertNumber(34, 2);
		testObj.insertNumber(11, 4);
		testObj.insertNumber(120, 7);
		testObj.print();

		try
		{
			testObj.setArraySize(15);
			testObj.print();
		}
		catch (MemoryAllocationException &except)
		{
			except.reportError();
		}

		try
		{
			testObj.setArraySize(-5);
			testObj.print();
		}
		catch (MemoryAllocationException &except)
		{
			except.reportError();
		}

		try
		{
			testObj.setArraySize(15);
			testObj.print();
		}
		catch (MemoryAllocationException &except)
		{
			except.reportError();
		}

		try
		{
			testObj.setArraySize(4);
			testObj.print();
		}
		catch (MemoryAllocationException &except)
		{
			except.reportError();
		}



	}
	catch (MemoryAllocationException &except)
	{
		except.reportError();
	}


	cout << endl;

	return 0;
}