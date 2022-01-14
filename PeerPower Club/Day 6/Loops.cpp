#include <iostream>
using namespace std;
 
int main () {
	
   int a = 10;

   // while loop execution
   cout<<"Using while loop\n";
   while( a < 20 ) {
      cout << "value of a: " << a << endl;
      a++;
   }
   
   // for loop
   cout<<"\nUsing for loop\n";
    for( int a = 10; a < 20; a++ ) {
      cout << "value of a: " << a << endl;
   }
   
   // do...while loop
   cout<<"\nUsing do...while loop\n";
	a = 10;
   
   do {
      cout << "value of a: " << a << endl;
      a = a + 1;
   } while( a < 20 );
 
   return 0;
}
