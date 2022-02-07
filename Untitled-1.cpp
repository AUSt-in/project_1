/*
Write a program that calculates the retroactive pay due to employees. 
The workers have won a 7.6% pay increase, effective 6 months retroactively.
Austin Pereira
13.10.21
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float oldSalary;
    string fullName;
    
    const float INCREASE = 0.076;

    cout << "Welcome, to our program " <<endl; // Welcome prompt
    
    cout << "Enter your current annual salary" << endl; 
    cin >> oldSalary; // inputs old salary

    float newSalary = oldSalary * (1 + INCREASE); // calculates new salary

    float annualSalary = 12 * oldSalary; // inputs annual salary

    float retroActive = (newSalary - oldSalary) / 2; 
    // calculates retro active pay

    cout<< setprecision(2) << fixed;
    cout << " I'll return your new annual salary, monthly salary," <<
    " and retroactive pay." << endl; 
    cout << "new annual salary " << newSalary << endl; // outputs annual salary
    cout << "new monthly salary " << newSalary << endl; // output monthlySalary
    cout << "the retroactive salary due: " << retroActive <<  endl;
    // outputs retro active pay.

    cout << "Enter the first name and last name" << endl; // name prompt
    cin.ignore();
    getline(cin , fullName); // inputs first name
    

    cout << "It was nice working with you " << fullName << 
    "! Bye for now." << endl; // bye prompt
    return 0;
}

/*
Welcome, to our program 
Enter your current annual salary
3578
 I'll return your new annual salary, monthly salary, and retroactive pay.
new annual salary 3849.93
new monthly salary 3849.93
the retroactive salary due: 135.96
Enter the first name and last name
Austin pereira
It was nice working with you Austin pereira! Bye for now.
*/
