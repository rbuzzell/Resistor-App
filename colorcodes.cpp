//Program to calculate the color code of resistors.
//Ryan Buzzell
//10-02-2012

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int bandValue(string);
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
	cout << "Enter the colors on the color band in order. Program will accept the following format 'color'" << endl;
	cout <<"Enter the color of the first band: " << endl;
	cin >> color1;
	cout << "Enter the color of the second band: " <<  endl;
	cin >> color2;
	cout << "Enter the color of the third band: " << endl;
	cin >> color3;
	cout << "Enter the color of the fourth band: " << endl;
	cin >> color4;
	cin.ignore (1000, '\n');

    //To define values for each band
	do
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
	}
	while (band1 = 1234);

//	do
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
												}
	}
//	while (band2 = 1234);
//	do
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
												}
	}
		//The Math Section

		total = band1 * band3 + band2 * (band3 /10); //To calculate the total resistance of the resistor

		//The output section
		cout << fixed << setprecision (0) << setw (13) <<endl;
		cout << "The corresponding number for band 1 is: " << band1 <<endl;
		cout << "The corresponding number for band 2 is: " << band2 <<endl;
		cout << "The multiplier for band 3 is: " << band3 <<endl;
		cout << "The total resistance of the resistor is: " << total <<endl;
	return 0;
}

int bandValue(string color){

    int value =  0;
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
    return value;
}
