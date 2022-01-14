#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	char *ptr=NULL, *new_ptr;

	/* reallocating memory, behaves same as malloc(20*sizeof(char)) */
	new_ptr = (char*) realloc(ptr, 50*sizeof(char));
	strcpy(new_ptr, "Welcome to Programiz.com");
	cout << new_ptr;

	free(new_ptr);
	return 0;
}
