# include <iostream>
using namespace std;

int main()
{
		
	int a, b, choice;
	cout<<"Enter two integers\n";
	cin>>a>>b;
	
	cout<<"We are going to perform arithmetic operations on these 2 numbers\n";
	cout<<"1. Addition\n";
	cout<<"2. Subtraction of smaller number from the bigger number(Positive result)\n";
	cout<<"3. Multiplication\n";
	cout<<"4. Division of bigger number by the smaller number(product is bigger than 1)\n\n";
	cout<<"Enter the corresponding number to perform one of these operations\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Addition is "<<a+b;
			break;
			
		case 2:
			{
				if(a>b)
				{
					cout<<"Subtraction is "<<a-b;
				}
				else 
				{
					cout<<"Subtraction is "<<b-a;
				}
				break;
			}
		
		case 3:
			cout<<"Multiplication is "<<a*b;
			break;
			
		case 4: 
		{
			if(a>b)
				{
					cout<<"Division is "<<(float)a/b;
				}
				else 
				{
					cout<<"Division is "<<(float)b/a;
				}
				break;
		}
			
	}
		
}
