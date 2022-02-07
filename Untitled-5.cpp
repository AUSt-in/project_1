/*
A mobile phone service provider has three different subscription
packages for its customers:
Package A: For $39.99 per month 450 minutes are provided. 
Additional minutes are $0.45 per minute
Package B: For $59.99 per month 900 minutes are provided. 
Additional minutes are $0.40 per minute.
Package C: For $69.99 per month unlimited minutes provided.
This program would take the user input's choice option
and ask how many minutes they spent. Then, this program will calculate
the total amount spent and how many savings were earned.
Austin Pereira
10/28/21
*/
#include <iostream>

using namespace std;

int main ()
{
    int optionNum, numMins;
    const int A_MINS = 450; 
    const int B_MINS = 900;

    const double PRICE_A = 39.99;
    const double PRICE_B = 59.99;
    const double PRICE_C = 69.99;

    const double ADDRATE_A = 0.45;
    const double ADDRATE_B = 0.40;

    double totalPriceA, totalPriceB, totalPriceC;


    cout << "Please select a package:";
    cout << "\n1.)Package A \n2.)Package B \n3.)Package C";
    cout << "\n4.)Quit" << endl;
    cin >> optionNum; // inputs the option number


    switch (optionNum)
    {
    case 1:
    cout << "How many minutes were used?";
    cin >> numMins; // inputs num of minutes used

    
    if (numMins < A_MINS)
        totalPriceA = PRICE_A;
    else 
    {
        totalPriceA = PRICE_A + (ADDRATE_A * (numMins - A_MINS));
    }

    if (numMins < B_MINS)
        totalPriceB = PRICE_B;
    else 
    {
        totalPriceB = PRICE_B + (ADDRATE_B * (numMins - B_MINS));
    }

    totalPriceC = PRICE_C;
        cout << "The total amount due is $ " <<  totalPriceA << endl;

        if (totalPriceA > totalPriceB)
        {
        cout << "Savings with Package B: $ " << totalPriceA - totalPriceB;
        cout << endl;
        }
        else
        {
            cout << "Savings with Package B: No Saving!" << endl; 
        }

        if (totalPriceA > totalPriceC)
        {
        cout << "Savings with Package C: $ " << totalPriceA - totalPriceC;
        cout << endl;
        }

        else
        {
            cout << "Savings with Package C: No Saving!" << endl; 
        }
        break;

    case 2:
    cout << "How many minutes were used?";
    cin >> numMins;


    if (numMins < A_MINS)
        totalPriceA = PRICE_A;
    else 
    {
        totalPriceA = PRICE_A + (ADDRATE_A * (numMins - A_MINS));
    }

    if (numMins < B_MINS)
        totalPriceB = PRICE_B;
    else 
    {
        totalPriceB = PRICE_B + (ADDRATE_B * (numMins - B_MINS));
    }

    
    totalPriceC = PRICE_C;
        cout << "The total amount due is $ " <<  totalPriceB << endl;

        if (totalPriceB > totalPriceA)
        {
        cout << "Savings with Package A: $ " << totalPriceB - totalPriceA;
        cout << endl;
        }

        else
        {
            cout << "Savings with Package A: No Saving!"<< endl; 
        }

        if (totalPriceB > totalPriceC)
        {
        cout << "Savings with Package C: $ " << totalPriceB - totalPriceC;
        cout << endl;
        }

        else
        {
            cout << "Savings with Package C: No Saving!" << endl; 
        }
         break;

    case 3:
    cout << "How many minutes were used?";
    cin >> numMins;


    if (numMins < A_MINS)
        totalPriceA = PRICE_A;

    else 
    {
        totalPriceA = PRICE_A + (ADDRATE_A * (numMins - A_MINS));
    }

    if (numMins < B_MINS)
        totalPriceB = PRICE_B;

    else 
    {
        totalPriceB = PRICE_B + (ADDRATE_B * (numMins - B_MINS));
    }

    
    totalPriceC = PRICE_C;
        cout << "The total amount due is $ " <<  totalPriceC<< endl;

        if (totalPriceC > totalPriceA)
        {
        cout << "Savings with Package A: $ " << totalPriceA - totalPriceC;
        cout << endl;
        }
        else
        {
            cout << "Savings with Package A: No Saving!"<< endl; 
        }

        if (totalPriceC > totalPriceB)
        {
        cout << "Savings with Package B: $ " << totalPriceB-totalPriceC;
        cout << endl;
        }

        else
        {
            cout << "Savings with Package B: No Saving!"<< endl; 
        }

        break;
    
    case 4:

     break;
    
    default:
     cout << "The valid choices are 1 through 4.";
     cout << "Run the program again and select one of those." << endl;
     break;
    }
    

    return 0;
}

/*
Please select a package:
1.)Package A 
2.)Package B 
3.)Package C
4.)Quit
3
How many minutes were used?600
The total amount due is $ 69.99
Savings with Package A: No Saving!
Savings with Package B: $ -10
*/