// Payroll System: Phase 3B

#include <iostream> //input/output
#include <math.h> //math functions
#include <fstream>

using namespace std;

int main() {
	ifstream input;
	input.open("payroll.txt");

	//variables
	int employee_id,numberofemployees;
	double const TAX = 0.10;
	double hours_worked, hourly_rate, net_pay, gross_pay, tax_amount;
	numberofemployees = 0;

	//input
		while (input >> employee_id >> hours_worked >> hourly_rate) {
			//calculations
			gross_pay = hours_worked * hourly_rate;
			tax_amount = gross_pay * TAX;
			net_pay = gross_pay - tax_amount;
			cout << "Your ID Is: " << employee_id << endl;
			cout << "Your Hours Worked Is: " << hours_worked << endl;
			cout << "Your Hourly Rate Is: " << hourly_rate << endl;
			cout << "Your Gross Pay Is: " << gross_pay << endl;
			cout << "Your Tax Rate Is: " << TAX << endl;
			cout << "Your Tax Amount Is: " << tax_amount << endl;
			cout << "Your Net Pay Is: " << net_pay << endl;
		}
	input.close();
 system ("pause");
} //main

