#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int number,counter=0;
	
	do
	{
		cout << "Enter a number: ";
		cin >> number;
		
		counter++;
	}while(number!=0);
	
	cout << "\n\nYou used "<< counter-1 <<" number(s).";
	
	return 0;
}
