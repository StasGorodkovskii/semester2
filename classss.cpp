#include<iostream>
#include"stdafx.h"

using namespace std;
class Students{
	private:

	char[20] Name;
	int NumberOfPass;
	       int BirthDate;
                      int Finish;
public:
Students(char n,int num,int birth):Name(n),NumberOfPass(num),BirthDate(birth),Finish(finish)
{
finish=birth+21;
	cout<<"The year of graduatings: "<<finish<<endl;
	
	
}

	       
	void enterData()
	{
		cout << "Enter the Name: ";
		cin >> Name;
		cout << "Enter the Age:";
		cin >> Age;
		cout << "Enter the NumberOfPasss:";
		cin >> NumberOfPass;
	}

	void displayData()
	{
		cout << "Enter Name please: " <<Name << endl;
		cout << "Enter Age please" << Surname << endl;
		cout << "Enter Nymber of passbook please" << Surname << endl;
	}

};





int main()
{
	Students StudentOne('n',birth,num);
	StudentOne.enterData();
	StudentOne.displayData();
	
	Students StudentTwo('n',birth,num);
	StudentTwo.enterData();
	StudentTwo.displayData();
	
	Students StudentThree('n',birth,num);
	StudentThree.enterData();
	StudentThree.displayData();
	
	Students StudentFour('n',birth,num);
	StudentFour.enterData();
	StudentFour.displayData();
	
	Students StudentFive('n',birth,num);
	StudentFive.enterData();
	StudentFive.displayData();
	

	return 0;
}
