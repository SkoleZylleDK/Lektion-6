#pragma once
#include <iostream>

using namespace std;

class MemoryAllocationException
{
public:
	MemoryAllocationException(bool);
	void reportError(void);

private:
	bool terminateProgram_;

};