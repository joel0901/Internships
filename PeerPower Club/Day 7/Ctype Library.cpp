#include <iostream>
#include <cctype>
using namespace std;

int main() 
{
	char messyString[] = "t6H0I9s6.iS.999a9.STRING";

	char current = messyString[0];
	for(int i = 0; current != '\0'; current = messyString[++i])
	{
 		if(isalpha(current))
 			cout << (char)(isupper(current) ? tolower(current) : current);
 		else if(ispunct(current))
 			cout << ' ';
 	}	

 	cout << endl;
 	
 	//This example uses the isalpha, isupper, ispunct, and tolower functions from the cctype
	//library. The is- functions check whether a given character is an alphabetic character, an
	//uppercase letter, or a punctuation character, respectively. These functions return a Boolean
	//value of either true or false. The tolower function converts a given character to lowercase. 
 	
 	
 	return 0;
 }
