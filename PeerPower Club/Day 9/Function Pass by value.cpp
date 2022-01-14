# include <iostream>
using namespace std;

void square ( int num ) 
{
	num = num * num;
	cout<<num<<endl;
}
	
void square_arr ( int arr[] )
{
	for (int i = 0; i<7; i++)	
	{
		arr[i] = arr[i] * arr[i];
	}
	
	for (int i = 0; i < 7; i++)
	{
		cout<<arr[i]<<endl;
	}
}	
	
int main () {
	int x = 5;
	square (x);
	cout << x<<endl;
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	square_arr(arr);
	cout<<arr;
	
	for (int i = 0; i < 7; i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
