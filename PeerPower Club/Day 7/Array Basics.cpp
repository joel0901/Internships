#include <iostream>
using namespace std;

int main() {

int arr[4];
cout << "Please enter 4 integers: " << endl;

for(int i = 0; i < 4; i++)
	cin >> arr[i];



cout << "Values in array are now :";



for(int i = 0; i < 4; i++)
	cout <<" "<< arr[i];


cout << endl;


int twoDimArray[2][4];
twoDimArray[0][0] = 6;
twoDimArray[0][1] = 0;
twoDimArray[0][2] = 9;
twoDimArray[0][3] = 6;
twoDimArray[1][0] = 2;
twoDimArray[1][1] = 0;
twoDimArray[1][2] = 1;
twoDimArray[1][3] = 1;

for(int i = 0; i < 2; i++)
	for(int j = 0; j < 4; j++)
		cout << twoDimArray[i][j]<<endl;

cout << endl;



int Array2d[3][3];

cout<<"Enter the elements of a 3*3 array one by one\n";

for (int i = 0; i<3; i++)
	for (int j = 0; j<3; j++)
		cin>>Array2d[i][j];

cout<<"The values in the 2D array is\n";

for (int i = 0; i<3; i++)
	for (int j = 0; j<3; j++)
		cout<<Array2d[i][j]<<endl;

return 0;
}


