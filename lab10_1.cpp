#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){	
	double loan,rpy,pay; 
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rpy;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i=1;
	do
		{	
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i; 
			cout << setw(13) << left << loan;
			cout << setw(13) << left << (loan*rpy)/100;
			cout << setw(13) << left << ((loan*rpy)/100)+loan;
			if((((loan*rpy)/100)+loan)<pay)
			{
				pay = (((loan*rpy)/100)+loan);
			}
			cout << setw(13) << left << pay;
			cout << setw(13) << left << (((loan*rpy)/100)+loan)-pay;
			cout << "\n";
			i++;
			loan = 	 (((loan*rpy)/100)+loan)-pay ;
			if((((loan*rpy)/100)+loan)==pay)break;
			
		}while(loan>0);
	return 0;
}
