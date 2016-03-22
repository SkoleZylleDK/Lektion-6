#include <iostream>
#include "Sladrehank.h"

using namespace std;

int main()
{
	cout << "\nEksperiment 4 \"Insert 5 object into array without any copying!!!\"\n\n";
	const int SIZE = 5;
	Sladrehank *sladrehankPtrArray[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		string s = "Instans s";
		char c = i + 49;

		sladrehankPtrArray[i] = new Sladrehank(s + c);
	}

	for (int i = 0; i < SIZE; i++)
	{
		delete sladrehankPtrArray[i];
	}
}


/*

opgave 6.4
{
cout << "\nEksperiment 1 \"Lille constructor test\"\n\n";
Sladrehank s1 = Sladrehank();
Sladrehank s2;
Sladrehank s3 = Sladrehank("Instans	s3");
Sladrehank s4("Instans s4");
Sladrehank s5 = s1;
Sladrehank s6(s3);
}


opgave 6.5
{
cout << "\nEksperiment 2 \"Insert 2 objects into array - 1\"\n\n";
const int SIZE = 2;
Sladrehank s1("Instans s1");
Sladrehank s2("Instans s2");
Sladrehank sladrehankArray[SIZE];
sladrehankArray[0] = s1;
sladrehankArray[1] = s2;
}


{
cout << "\nEksperiment 3 \"Insert 2 objects into array - 2\"\n\n";
const int SIZE = 2;
Sladrehank sladrehankArray[SIZE];
sladrehankArray[0] = Sladrehank("Instans s1");
sladrehankArray[1] = Sladrehank("Instans s2");
}



Opgave 6.6
{
cout << "\nEksperiment 4 \"Insert 5 object into array without any copying!!!\"\n\n";
const int SIZE = 5;
Sladrehank *sladrehankPtrArray[SIZE];

for (int i = 0; i < SIZE; i++)
{
string s = "Instans s";
char c = i + 49;

sladrehankPtrArray[i] = new Sladrehank(s+c);
}

for (int i = 0; i < SIZE; i++)
{
delete sladrehankPtrArray[i];
}
}
*/