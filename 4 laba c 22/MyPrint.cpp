#include "MyPrint.h"

std::ostream & operator<<(std::ostream & mycout, const A & myobj)
{
	mycout << myobj.a;
	return mycout;
}
