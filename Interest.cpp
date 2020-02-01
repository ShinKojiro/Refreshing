#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(2);
//
//	double balance = 0;
//	double interest = .015;
//	double totalInterest = 0;
//	double totalDue = 0;
//	double first1000interest = .010;
//	double amountDue1000 = 0;
//	double monthlyPayment = 0;
//
//
//	char reEnter = 'y';
//
//	cout << "Simple payment Loan payment calculator\n";
//
//	while (reEnter == 'y' || reEnter == 'Y')
//	{
//		cout << "\nEnter loan balance: ";
//		cin >> balance;
//		cout << "The interest for the first $1000 is " << first1000interest * 100 << "%, while the remaining balance interest is " << interest * 100 << "%.\n";
//
//		if (balance > 1000)
//		{
//			amountDue1000 = 1000 * first1000interest;
//			totalInterest = amountDue1000 + (balance * interest);	
//		}
//		else
//		{
//			totalInterest = balance * first1000interest;
//		}
//		totalDue = balance + totalInterest;
//
//		cout << "\nTotal amount due for loan is $" << totalInterest << ".\n";
//		cout << "The total owed back is $" << totalDue << ".\n";
//		cout << "\nWould you like to enter a new balance? ";
//		cin >> reEnter;
//	}
//
//}