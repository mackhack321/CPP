// BMICalc.cpp : Defines the entry point for the console application.
//

#include <cmath>
#include <string>
#include <iostream>
using namespace std;

double BMIimp(int weight, int height)
{
	return (weight * 703) / (pow(height, 2));
}

double BMImet(int weight, int height)
{
	return weight / pow(height, 2);
}

string evalbmi(double bmi)
{
	if (bmi < 18.5) { return "underweight."; }
	else if (bmi >= 18.5 && bmi <= 24.9) { return "normal weight."; }
	else if (bmi >= 25 && bmi <= 29.9) { return "overweight."; }
	else if (bmi >= 30) { return "obese"; }
	return "IF YOU'RE READING THIS, MACK BROKE SOMETHING";
}

double getHeight()
{
	double height;
	cout << "Enter your height: ";
	cin >> height;
	return height;
}

double getWeight()
{
	double weight;
	cout << "Enter your weight: ";
	cin >> weight;
	return weight;
}

string getUnit()
{
	string unit;
	while (unit != "i" && unit != "m")
	{
		cout << "Metric or Imperial? (m/i): ";
		cin >> unit;
	}
	return unit;
}

void bmijunction(string unit, double height, double weight)
{
	double bmi;
	if (unit == "i") { bmi = BMIimp(weight, height); }
	else if (unit == "m") { bmi = BMImet(weight, height); }
	cout << "Your BMI is " << bmi << ", which is classified as " << evalbmi(bmi) << endl;
}

int main()
{
	bmijunction(getUnit(), getHeight(), getWeight());
	return 0;
}
