#include <iostream>
using namespace std;

// Here we specify the exceptions that this function
// throws.
void fun(int *ptr, int x) throw (int *, int) // Dynamic Exception specification
{
	if (ptr == NULL)
		throw ptr;
	if (x == 0)
		throw x;
	/* Some functionality */
}

int main()
{
	try {
	fun(NULL, 0);
	}
	catch(...) {
		cout << "Caught exception from fun()";
	}
	return 0;
}
// The use of Dynamic Exception Specification has been deprecated after C++11, 
// one of the reason maybe because it can randomly abort your program. 
// This can happen when you throw an exception of an another type which is not mentioned
// in the dynamic exception specification, your program will abort itself, because in 
// that scenario program calls(indrectly) terminate(), and which is by default call abort()).
