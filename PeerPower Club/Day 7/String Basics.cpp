#include <iostream>
using namespace std;

int main() 
{
	char helloworld[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0' };
	cout << helloworld << endl;
	
	//This program prints Hello, world! Note that the character array helloworld ends with a
	//special character known as the null character. This character is used to indicate the end of the
	//string. 
	
	//Character arrays can also be initialized using string literals. In this case, no null character is
	//needed, as the compiler will automatically insert one:
	char helloearth[] = "Hello, earth!";
	cout<<helloearth<<endl;
	
	return 0;
	
}
