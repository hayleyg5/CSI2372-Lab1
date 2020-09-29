#include "myfile1.h"

void main(void)
{
	cout << "Hello" << endl;
	cout << "Welcome to CSI2372A" << endl;

	cout << "Number of bytes used by char: " << sizeof(char) << endl;
	cout << "Number of bytes used by int: " << sizeof(int) << endl;
	cout << "Number of bytes used by float: " << sizeof(float) << endl;
	cout << "Number of bytes used by double: " << sizeof(double) << endl;
	cout << "Number of bytes used by unsigned int: " << sizeof(unsigned int) << endl;
	cout << "Number of bytes used by short int: " << sizeof(short int) << endl;

	int num;
	double real;
	char letter;

	cout << "Type an integer: ";
	cin >> num;
	cout << "First Display" << endl;
	cout << "Your integer in decimal format is: " << dec << num << endl;
	cout << "Your integer in octal format is: " << oct << num << endl;
	cout << "Your integer in hexadecimal format is: " << hex << num << endl;

	cout << "Second Display" << endl;
	std::cout << "Your integer in decimal format is: " << std::setbase(10) << num << endl;
	std::cout << "Your integer in octal format is: " << std::setbase(8) << num << endl;
	std::cout << "Your integer in hexadecimal format is: " << std::setbase(16) << num << endl;

	cout << "Type a real number: ";
	cin >> real;
	cout << "Your real number is: " << fixed << setprecision(3) << real << endl;
	cout << "Your real number in scientific notation is: " << scientific << setprecision(3) << real << endl;

	cout << "Type a character: ";
	cin >> letter;
	cout << "Your character is: " << letter << endl;
	cout << "Your character in decimal format is: " << dec << letter << endl;

}