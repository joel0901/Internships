# include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	
	// Assignment Operator
	a = 10;
	b = 5;
	c = 15;
	
	// Arithmetic Operator
	d = a + b;
	e = b * c;
	cout<<d<<" "<<e<<"\n";
	
	// Logical and Relational Operator
	if ((d<e) && (a>b))
	{
		cout<<e<<" is larger than "<<d<<" and "<<a<<" is larger than "<<b;
	}
	
	return 0;
}
