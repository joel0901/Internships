#include <iostream>
#include <csignal>
using namespace std;

void signal_handler( int signal_num ) {
cout << "The interrupt signal is (" << signal_num << "). \n";
	
// terminate program
exit(signal_num);
}

int main () {
signal(SIGABRT, signal_handler);
// register signal SIGABRT and signal handler

while(true)
	cout << "Hello GeeksforGeeks..." << endl;
return 0;
}

