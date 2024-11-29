#include<iostream>
using namespace std;

int main() {
    double budget[3][12];

    cout << "Enter the budget data for each item (Rent, Electric, Gas) for each month:" << endl;

    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            cout << "Enter data for Rent:" << endl;
        } else if (i == 1) {
            cout << "Enter data for Electric:" << endl;
        } else {
            cout << "Enter data for Gas:" << endl;
        }

        for (int j = 0; j < 12; j++) {
            cout << "Month " << (j + 1) << ": ";
            cin >> budget[i][j];
        }
    }

    cout << "\nYearly Budget Breakdown:" << endl;
    cout << "Item\t\tJanuary\tFebruary\tMarch\tApril\tMay\tJune\tJuly\tAugust\tSeptember\tOctober\tNovember\tDecember" << endl;

    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            cout << "Rent\t\t";
        } else if (i == 1) {
            cout << "Electric\t";
        } else {
            cout << "Gas\t\t";
        }

        for (int j = 0; j < 12; j++) {
            cout << budget[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
