//
// Created by ISHIOMA on 8/18/2023.
//

#include <iostream>
#include <fstream>
using namespace std;


    int savings_c (int monthSalary, int monthExpense) {
        int savings = monthSalary - monthExpense;
        return savings;
    }


int main () {
ofstream MyFile("Income_bracket.txt");
    int monthSalary;
    int monthExpense;
    int savings;

    //income(long monthSalary, long monthExpense);

    cout << "Input monthly salary: " << endl;

    cin >> monthSalary;
    cout << "Input monthly expense: ";
    cin >> monthExpense;
        savings = savings_c(monthSalary, monthExpense);
    MyFile << "Savings at the end of the month is:" << savings << "\n";


    if (monthSalary > 0 && monthSalary <= 30000) {
        MyFile << "Your income bracket is Lower class\n";
    } else if (monthSalary > 30000 && monthSalary <= 200000) {
        MyFile << "Your income bracket is lower middle class" << endl;
    } else if (monthSalary > 200000 && monthSalary <= 700000) {
        MyFile << "Your income bracket is middle class" << endl;
    } else if (monthSalary > 700000 && monthSalary <= 3000000) {
        MyFile << "Your income bracket is Upper middle class" << endl;
    } else if (monthSalary > 3000000) {
        MyFile << "Your income bracket is Upper class" << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    if (savings < 0) {
        MyFile << "You are in debt, E choke" << endl;
    }
    else if (savings >= 0 && savings <= 50000) {
        MyFile << "Your bills are paid but you need to breatheeee" << endl;

    }else {
        MyFile << "You're doing well" << endl;
    }
    MyFile.close();
}