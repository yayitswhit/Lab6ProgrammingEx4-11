//
//  main.cpp
//  Lab6ProgrammingEx4-11
//
//  Created by Gilbert W. Sanborn Jr on 2/16/23.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    double baseSalary;
    int numberOfYearsWorking;
    double monthlyTotalSales;
    double additionalBonus;
    double bonus;
    double monthlyPaycheck;
    
    cout << "What's your base salary? ";
    cin >> baseSalary;
    
    cout << "Number of years at the store: ";
    cin >> numberOfYearsWorking;
    if(numberOfYearsWorking <= 5 && numberOfYearsWorking > 0) {
        bonus = 10 * numberOfYearsWorking;
    }
    else if (numberOfYearsWorking > 5) {
        bonus = 20 * numberOfYearsWorking;
    }
    else {
    }
    
    cout << "Monthly Total Sales: ";
    cin >> monthlyTotalSales;
    if(monthlyTotalSales >= 5000 && monthlyTotalSales < 10000) {
        additionalBonus = monthlyTotalSales * .03;
    }
    else if(monthlyTotalSales >= 10000) {
        additionalBonus = monthlyTotalSales * .06;
    }
    
    monthlyPaycheck = baseSalary + bonus + additionalBonus;
    cout << fixed << setprecision(2) << "Monthly Paycheck: " << monthlyPaycheck << endl;
    return 0;
}
