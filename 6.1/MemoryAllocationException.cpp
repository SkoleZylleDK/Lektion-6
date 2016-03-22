#include "MemoryAllocationException.h"

MemoryAllocationException::MemoryAllocationException(bool x)
{
	terminateProgram_ = x;
}

void MemoryAllocationException::reportError()
{
	if (terminateProgram_ == true)
	{
		cout << "Allocation of memory failed - program will terminate\n\n";
		exit(1);
	}
	else if (terminateProgram_ == false)
		cout << "Allocation of memory failed - no chances were made\n\n";
}