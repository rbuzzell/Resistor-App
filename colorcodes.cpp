//Program to calculate the color code of resistors.
//Ryan Buzzell
//10-02-2012

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//Variables related to exact color
	const int black = 0;
	const int brown = 1;
	const int red = 2;
	const int orange = 3;
	const int yellow = 4;
	const int green = 5;
	const int blue = 6;
	const int violet = 7;
	const int grey = 8;
	const int white = 9;
	


void bandCheck (string);
int main ()
{

		
	/*Variables related to fault tolerence
	const int brown2 = .01;
	const int red2 = .02;
	const int gold = .05;
	const int silver = .10;
	*/
	string toleranceBand = " ";

	//Strings related to user input
	string color1;	//The user input for band 1
	string color2;	//The user input for band 2
	string color3;	//The user input for band 3
	string color4;	//The user input for band 4
	
	//Output constants
	const string BAND_ONE_INPUT   = "Enter the color of the first band";
	const string BAND_TWO_INPUT   = "Enter the color of the second band";
	const string BAND_THREE_INPUT = "Enter the color of the third band";
	const string BAND_FOUR_INPUT  = "Enter the color of the fourth band";
	const string WARNING_MESSAGE  = "This program only accepts input in all lower case. Also, for clarification, the purple/violet band is violet";
	const string ERROR_MESSAGE    = "Not a valid input, please try again.";
	const string BAND_ONE_OUTPUT  = "The value for band one is: ";
	const string BAND_TWO_OUTPUT  = "The value for band two is: ";
	const string BAND_THREE_OUTPUT= "The value for band three is: ";
	const string BAND_FOUR_OUTPUT = "The value for band four is: ";
	const string TOTAL_VALUE      = "The total of the resistor is ";
	const string TOTAL_VALUE_2    = " ohms.";

	//Strings for the math
	double band1 = 1234;	//The numeric value for band 1
	double band2 = 0;	//the numeric value for band 2
	double band3 = 0;	//the numeric value for band 3
	double band4 = 0;	//the numeric value for band 4
	double total = 0;	//the numeric value for the total resistacne in the resistor

	/*Get the color bands from the user
	cout << WARNING_MESSAGE << endl;
	cout << BAND_ONE_INPUT  << endl;
	cin >> color1;
	cout << BAND_TWO_INPUT <<  endl;
	cin >> color2;
	cout << BAND_THREE_INPUT << endl;
	cin >> color3;
	cout << BAND_FOUR_INPUT << endl;
	cin >> color4;
	cin.ignore (1000, '\n');
	*/
	//error check
	cout << endl <<	endl << "Error Check: " << endl << color1 << endl << color2 << endl << color3 << endl << color4 << endl;

	//To define values for each band
	cout << WARNING_MESSAGE << endl << BAND_ONE_INPUT << endl;
	cin >> color1;
	bandCheck(color1);
	/*do
	{
		if (color1 == "black")
		{
			band1 = 0;
		}
		else if (color1 == "brown")
		{
		band1 = 1;
		}
		else if (color1 == "red")
		{
		band1 = 2;
		}
		else if (color1 == "orange")
		{
		band1 = 3;
		}
		else if (color1 =="yellow")
		{
		band1 = 4;
		}
		else if (color1 == "green")
		{
		band1 = 5;
		}
		else if (color1 == "blue")
		{
		band1 = 6;
		}
		else if (color1 == "violet")
		{
		band1 = 7;
		}
		else if (color1 == "grey")
		{
		band1 = 8;
		}
		else if (color1 == "white")
		{
		band1 = 9;
		}
		else
		{
		band1 = 1234; //sets a failure condition
		cout << "ERROR! must be in all lowercase. Also the purple one has to be entered as violet" << endl;
		cout << "Enter the colors on the color band in order. Program will accept the following format 'color'" << endl;
		cout <<"Enter the color of the first band: " << endl;
		cin >> color1;
		}
	}*/
	while (band1 == 1234);

	do
	{
		if (color2 == "black")
		{
			band2 = 0;
		}
		else if (color2 == "brown")
		{
		band2 = 1;
		}
		else if (color2 == "red")
		{
		band2 = 2;
		}
		else if (color2 == "orange")
		{
		band2 = 3;
		}
		else if (color2 =="yellow")
		{
		band2 = 4;
		}
		else if (color2 == "green")
		{
		band2 = 5;
		}
		else if (color2 == "blue")
		{
		band2 = 6;
		}
		else if (color2 == "violet")
		{
		band2 = 7;
		}
		else if (color2 == "grey")
		{
		band2 = 8;
		}
		else if (color2 == "white")
		{
		band2 = 9;
		}
		else
		{
		band2 = 1234;
		cout << "ERROR! must be in all lowercase. Also the purple one has to be entered as violet" << endl;
		cout <<"Enter the color of the second band: " << endl;
		cin >> color2;
		}
	}
	while (band2 == 1234);
	do
	{
		if (color3 == "black")
		{
			band3 = 1;
		}
		else if (color3 == "brown")
		{
		band3 = 10;
		}
		else if (color3 == "red")
		{
		band3 = 100;
		}
		else if (color3 == "orange")
		{
		band3 = 1000;
		}
		else if (color3 =="yellow")
		{
		band3 = 10000;
		}
		else if (color3 == "green")
		{
		band3 = 10000;
		}
		else if (color3 == "blue")
		{
		band3 = 1000000;
		}
		else if (color3 == "violet")
		{
		band3 = 1000000;
		}
		else if (color3 == "grey")
		{
		band3 = 100000000;
		}
		else if (color3 == "white")
		{
		band3 = 1000000000;
		}
		else
		{
		band3 = 1234;
		cout << "ERROR! must be in all lowercase. Also the purple one has to be entered as violet" << endl;
		cout <<"Enter the color of the third band: " << endl;
		cin >> color3;
		}
	}while (band3 == 1234);

	do
	{
		if (color4 == "brown")
		{
			toleranceBand = "The tolerance of your resistor is +- 1%.";
		}
		else if (color4 == "red")
		{
			toleranceBand = "The tolerance of your resistor is +-2%";
		}
		else if (color4 == "gold") 
		{
			toleranceBand = "The tolerance of you resitor is +-5%";
		}
		else if (color4 == "silver")
		{
			toleranceBand = "The tolerance of your resistor is +- 10%";
		}
		else
		{
		cout << "Invalid value of the fourth band. Must be a color in lowercase letters.";
		color4 = "null";
		cout <<"Enter the color of the fourth band: " << endl;
		cin >> color4;

		}
	}while (color4 == "null");
	//The Math Section
		
	total = band1 * band3 + band2 * (band3 /10); //To calculate the total resistance of the resistor
	//The output section
	cout << fixed << setprecision (0) << setw (13) <<endl;
	cout << "The corresponding number for band 1 is: " << band1 <<endl;
	cout << "The corresponding number for band 2 is: " << band2 <<endl;
	cout << "The multiplier for band 3 is: " << band3 <<endl;
	cout << "The total resistance of the resistor is: " << total <<endl;
	return (0);
}

void bandCheck(string colorIn)
{
	int color = 0;
	if (colorIn == "brown")
		color = brown;
	else if (colorIn == "black")
		color = black;
	else if (colorIn == "red")
		color = red;
	else if (colorIn == "orange")
		color = orange;
	else if (colorIn == "yellow")
		color = yellow;
	else if (colorIn == "green")
		color = green;
	else if (colorIn == "blue")
		color = blue;
 	else if (colorIn == "violet")
		color = violet;
	else if (colorIn == "grey")
		color = grey;
	else if (colorIn == "white")
		color = white;
return color;
}
