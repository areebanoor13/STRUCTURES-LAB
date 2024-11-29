//CURRENCY CONVERTOR
#include <iostream>
using namespace std;
struct currency
{
	string currencyType;
	double amount;
};
int main()
{
	currency C;
	cout << "Enter the amount in dollars: ";
    cin >> C.amount;

    const double conversionRate = 282.5; 
   
    double pakistaniRs = C.amount * conversionRate;

	cout << "Currency in Pkistani rupees is " << pakistaniRs << endl;
   return 0;
}