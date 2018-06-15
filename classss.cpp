#include<iostream>
#include"stdafx.h"
#include<string>
using namespace std;
class Students{ private:

	char Name;
	char Surname;

public:

	void enterData()
	{
		cout << "Enter the Name: ";
		cin >> Name;
		cout << "Enter the Surname:";
		cin >> Surname;
	}

	void displayData()
	{
		cout << "Enter Name please: " <<Name << endl;
		cout << "Enter Surname please" << Surname << endl;
	}

};





int main()
{
	Students StudentOne;
	StudentOne.enterData();
	StudentOne.displayData();
	

	return 0;
}