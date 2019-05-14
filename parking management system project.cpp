#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

void line ()
{
	cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
}
int main()
{
	int count=0 , amount=0 , input , bike=0 ,rick = 0, van = 0, car=0 , bus=0 ;
	cout << endl;

	line();
	cout << setw(50) << "MENU" << endl;
	line();

	while(1)
	{
	start:
		cout << "\n";
	cout << "Press 1 for bike"<<endl;
	cout << "Press 2 for rickshaw"<<endl;
	cout << "Press 3 for car"<<endl;
	cout << "Press 4 for van"<<endl;
	cout << "Press 5 for bus"<<endl;
	cout << "Press 6 to display record"<<endl;
	cout << "Press 7 to delete  record"<<endl;
	cout << "Press 8 to exit"<<endl;


	cin >> input ;

	switch(input)
	{
		case 1:

			if(count <= 50)
			{
			amount = amount + 100;
			count = count + 1 ;
			bike = bike + 1;
			}
			else
			{
				cout << "Sorry , Parking full"<<endl;
				cout << endl;
				cout << endl;
			}
			goto start;
			break;
		case 2:

			if(count <= 50)
			{
			amount = amount + 200;
			count = count + 1 ;
			rick = rick + 1 ;
			}
			else
			{
				cout << "Sorry , Parking full"<<endl;
				cout << endl;
				cout << endl;
			}
			goto start;
			break;
		case 3:

			if(count <= 50)
			{
			amount = amount + 300;
			count = count + 1 ;
			car = car + 1;
			}
			else
			{
				cout << "Sorry , Parking full"<<endl;

				cout << endl;
				cout << endl;

			}
			goto start;
			break;

		case 4:
			if(count <= 50)
			{
			amount = amount + 400;
			count = count + 1 ;
			van = van + 1;
			}
			else
			{
				cout << "Sorry , Parking full"<<endl;

				cout << endl;
				cout << endl;

			}
			goto start;
			break;

		case 5:
			if(count <= 50)
			{
			amount = amount + 500;
			count = count + 1 ;
			bus = bus + 1;
			}
			else
			{
				cout << "Sorry , Parking full"<<endl;

				cout << endl;
				cout << endl;

			}
			goto start;
			break;
		case 6:

			cout << endl;
			cout << endl;
			cout << endl;

			line();
			cout << setw(50) << "Car Parking Record" << endl;
			line();
			cout << endl;
			cout << "Total amount  = " << amount << endl;
			cout << "Total number of vehicles = " << count << endl;
			cout << "Total number of bikes = " << bike << endl;
			cout << "Total number of rickshaws = " << rick << endl;
			cout << "Total number of cars = " << car << endl;
			cout << "Total number of vans = " << van << endl;
			cout << "Total number of buses = " << bus << endl;
			cout << endl;
			line();
			line();
			cout << endl;
			cout << endl;
			break;
			goto start;

		case 7:

			line();
			cout << setw(50) << "Record Deleted" << endl;
			line();
			amount = 0 ;
			count = 0 ;
			car = 0 ;
			bus = 0 ;
			bike = 0 ;
			rick = 0 ;
			van = 0 ;
			break;

		case 8:
			cout << "Program exit"<<endl;

	}
}
getch();
}
