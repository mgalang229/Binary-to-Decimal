#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int binary[100], num, i = 0, decimal = 0;
	
	cout << "~~~~~~~~~~ Binary Conversion ~~~~~~~~~~" << endl;
	cout << "Enter Binary Number: ";
	
	cin >> num;
	while (num > 0)
	{	
		binary[i] = num%10;
		num = num/10;
		i++;
	}
	
	cout << endl << "\t";
	for(i = i - 1; i >= 0; i--){
		if(i != 0){
			cout << binary[i] << "*" << "(2^" << i << ") + ";
		} else{
			cout << binary[i] << "*" << "(2^" << i << ")";
		}
		
		decimal += binary[i] * pow(2, i);
	}
	cout << "\n\nDecimal Value = " << decimal;
	
	return 0;
	
}
