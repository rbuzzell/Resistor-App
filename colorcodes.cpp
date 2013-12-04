/*Program to calculate the color code of resistors.
 *Ryan Buzzell
 *10-02-2012
 */

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int bandValue(string, bool);
string getInput(int);
int main ()
{
	//Strings related to user input
	string color1;	//The user input for band 1
	string color2;	//The user input for band 2
	string color3;	//The user input for band 3
	string color4;	//The user input for band 4

	//Strings for the math
	double band1 = 1234;	//The numeric value for band 1
	double band2 = 0;	//the numeric value for band 2
	double band3 = 0;	//the numeric value for band 3
	double band4 = 0;	//the numeric value for band 4
	double total = 0;	//the numeric value for the total resistance in the resistor

	//Get the color bands from the user
	cout << "Enter the colors on the color band in order." << endl;
	band1 = bandValue(getInput(1), false);
	band2 = bandValue(getInput(2), false);
	band3 = bandValue(getInput(3), true);
	//The Math Section

	total = band1 * band3 + band2 * (band3 /10); //To calculate the total resistance of the resistor

	//The output section
	cout << fixed << setprecision (0) << setw (13) << endl;
	cout << "The corresponding number for band 1 is: " << band1 << endl;
	cout << "The corresponding number for band 2 is: " << band2 << endl;
	cout << "The multiplier for band 3 is: " << band3 << endl;
	cout << "The total resistance of the resistor is: " << total << "\u03A9" << endl;
	return 0;
}

string getInput(int bandNumber){
    string bandColor;
    double bandIntValue;
    if (bandNumber == 1){
            cout << "Enter the color of band one: ";
            getline(cin, bandColor);
            for(int x = 0; x < bandColor.length(); x++){
                bandColor[x] = tolower(bandColor[x]);
            }
            return bandColor;
        }else if(bandNumber == 2){
            cout << "Enter the value of band two: ";
            getline(cin, bandColor);
            for(int x = 0; x < bandColor.length(); x++){
                bandColor[x] = tolower(bandColor[x]);
            }
            return bandColor;
        }else if(bandNumber == 3){
            cout << "Enter the value of band three: ";
            getline(cin, bandColor);
            for(int x = 0; x < bandColor.length(); x++){
                bandColor[x] = tolower(bandColor[x]);
            }

            return bandColor;
        }

    }


int bandValue(string color, bool thirdBand){

    int value =  0;
    if (thirdBand == false){
        if (color == "black")
            value = 0;
        else if(color == "brown")
            value = 1;
        else if(color == "red")
            value = 2;
        else if(color == "orange")
            value = 3;
        else if(color == "yellow")
            value = 4;
        else if(color == "green")
            value = 5;
        else if(color == "blue")
            value = 6;
        else if(color == "violet" || color == "purple")
            value == 7;
        else if(color == "grey" || color == "gray")
            value == 8;
        else if(color == "white")
            value == 9;
    }
    if (thirdBand == true) {
        cout << "I Make it here";
        if(color == "black")
            value = 1;
        else if(color == "brown")
            value = 10;
        else if(color == "red")
            value = 100;
        else if(color == "orange")
            value = 1000;
        else if(color == "yellow")
            value = 10000;
        else if(color == "green")
            value = 100000;
        else if(color == "blue")
            value = 1000000;
        else if(color == "violet" || color == "purple")
            value = 10000000;
        else if(color == "gray" || color == "grey")
            value = 100000000;
        else if(color == "white")
            value = 1000000000;
    }
    return value;
}
