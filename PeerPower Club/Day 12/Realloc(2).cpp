#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int *ptr, *new_ptr;
	ptr = (int*) malloc(5*sizeof(int));
	
	if(ptr==NULL)
	{
		cout << "Memory Allocation Failed";
		exit(1);
	}

	/* Initializing memory block */
	for (int i=0; i<5; i++)
	{
		ptr[i] = i;
	}

	/* re-allocating memory with size 0 */
	new_ptr = (int*) realloc(ptr, 0);
	if(new_ptr==NULL)
	{
		cout << "Null Pointer";
	}
	else
	{
		cout << "Not a Null Pointer";
	}

	return 0;
}
