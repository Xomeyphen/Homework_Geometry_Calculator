/*

Programmer’s name : N/A

Programmer : N/A

Date : 9 / 17 / 2023

Version : 1.5

 Des: A Geometry Calculator with 3 differnt types of chapes
	-Circle 
	-Rectangle
	-Triangle
Uses a loop for mutipule uses of calculator and has a quit
*/


#include <iostream>

using namespace std;

int main() {

	int StarterNum;
	double Area = 0.0;
	bool CoolLoop = true;
	char LoopDecider;

	for (CoolLoop = true; CoolLoop;) {//loop

		cout << "Hello welcome to my Geo Calucluaotr \nPlease enter 1-4: \n";
		cout << "1: Calculate the Area of a Circle \n";
		cout << "2: Calculate the Area of a Rectangle \n";
		cout << "3: Calculate the Area of a Triangle \n";
		cout << "4: Quit \n";
		cout << "-->";
		cin >> StarterNum;//number that chooese which one
		switch (StarterNum) {

			case 1: {//area of circle
				double Rad;
				const double pi = 3.14159;
				cout << "Please enter the radius of circle." << endl;
				cin >> Rad;
				if (Rad < 0) {
					cout << "Number can not be below zero.";
					continue;
				/*
				can also use:
    				
    				cin >> rad;
    				while(rad < 0) {
				cout << "radius cant be negtive";
    				cin >> rad;
				}
    				area = 3.1315 * rad * rad;
				cout  <<area: << area;

    				*or

 				do {
     				cout << "enter rad: ";
	 			cin >> rad;
     				} while (rad < 0)
	 			area = 3.1415 * rad * rad;
     				cout << "the area is: " << area;
	 			
				*/
				}
				Area = pi * pow(Rad, 2);
				cout << Area << endl;
				break;
			}

			case 2: {//area of rectangle 
				double Length, Width;
				cout << "Please enter the Length: ";
				cin >> Length;
				if (Length < 0) {
					cout << "Number can not be below zero.";
					continue;
				}
				cout << "Now enter Width: ";
				cin >> Width;
				if (Width < 0) {
					cout << "Number can not be below zero.";
					continue;
				}
				Area = Length * Width;
				cout << "The area is: " << Area << endl;
				break;
			}

			case 3: {//area of triangle
				double Base, Height;
				cout << "Please enter the length of the 'Base': ";
				cin >> Base;
				if (Base < 0) {
					cout << "Number can not be below zero.";
					continue;
				}
				cout << "Please enter the Height: ";
				cin >> Height;
				if (Height < 0) {
					cout << "Number can not be below zero.";
					continue;
				}
				Area = Base * Height * 0.5;
				cout << "The area of this triangle is: " << Area << endl;
				break;
			}
			case 4: {
				cout << "Goodbye!";
				CoolLoop = false;
				continue;
			}

			default: {
				cout << "Error! You need to input one number. \nEither 1, 2, 3, or, 4.\n";
				continue;
			}
		}

		// loop check
		cout << "\nWant to find another area? \n(e.g. y/n)\n-->";
		cin >> LoopDecider;
		if (LoopDecider == 'Y' || LoopDecider == 'y') {
			CoolLoop = true;
			cout << "\nOkay! \n";
			continue;
		}
		else {
			CoolLoop = false;
			continue;
		}
	}
	return 0;
}
