//Program to calculate the color code of resistors.
//Ryan Buzzell
//10-02-2012

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Global variables related to exact color
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
	const int fail = -99;
	

int bandCheck3rd (int);
int bandCheck (string);
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

	//To define values for each band
	do	//band 1
	{
	cout << WARNING_MESSAGE << endl << endl << BAND_ONE_INPUT << endl;
	cin >> color1;
	band1 = bandCheck(color1);
	}while (band1 == -99);

	do	//band 2
	{
	cout << BAND_TWO_INPUT << endl;
	cin >> color2;
	band2 = bandCheck(color2);
	}while (band2 == -99);
	
	do	//band 3
	{
	cout << BAND_THREE_INPUT << endl;
	cin >> color3;
	band3 = bandCheck(color3);
	}
	while (band3 == -99);
	band3 = bandCheck3rd(band3);	//set multiplier for band 3
	
	//band 4
	cout << BAND_FOUR_INPUT << endl;
	cin >> color4;
	
	do	//band 4. still not a function, but not nessecary at the point.
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


int bandCheck(string colorIn)
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
	else 
		color = fail;
return color;
}

int bandCheck3rd(int band3)
{
	int value;
	if (band3 == 0)
	value = 1;
	else if (band3 == 1)
	value = 10;
	else if (band3 == 2)
	value = 100;
	else if (band3 == 3)
	value = 1000;
	else if (band3 == 4)
	value = 10000;
	else if (band3 == 5)
	value = 100000;
	else if (band3 == 6)
	value = 1000000;
	else if (band3 == 7)
	value = 10000000;
	else if (band3 == 8)
	value = 100000000;
	else if (band3 == 9)
	value = 1000000000;
return value;
}
