#pragma once
#include <string>
#include <vector>

using namespace std;

// Klassen SLadrehank har blot til form�l at udskrive en besked, hver
// gang et objekt (instans) bliver oprettet, slettet eller kopieret.

class Sladrehank
{
public:
	// Det er disse 5 metoder (constructorer/destructor/assignment operator vi gerne vil holde �je med
	Sladrehank();										// Default constructor
	Sladrehank(const string &nameRef);					// Explicit defineret constructor (n�r objekt skal have et bestemt navn)
	Sladrehank(const Sladrehank& original);				// Copy constructor
	Sladrehank& operator=(const Sladrehank& original);	// Assignment operator
	~Sladrehank();										// Destructor

	// Disse 3 metoder, bruges bare til at lave p�ne udskrifter n�r
	// instanser oprettes eller nedl�gges. Disse detaljer er ikke vigtige.
	unsigned int getId() const;
	static unsigned int getNaesteId();
	static unsigned int getInstansTaeller();

private:
	unsigned int id_;							// Id for objektet (instansen)
	string name_;								// Navnet p� objektet (instansen)
	static unsigned int instansTaeller;			// Antal instanser der er oprettet
	static unsigned int naesteId;				// Id for n�ste instans der oprettes.
};