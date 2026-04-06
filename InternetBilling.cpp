// This program calculates the total monthly bill for interent service.
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    const double BASE_RATE_A = 9.95,
                 BASE_RATE_B = 14.95,
                 RATE_C = 19.95,
                 BASE_HRS_A = 10, 
                 BASE_HRS_B = 20,
                 ADD_HRLY_A = 2,
                 ADD_HRLY_B = 1,
                 MAX_HRS = 744;
    char choice;
    double hrs, total;
    bool error = false;
    
    cout << "Please choose one of following the internet service packages"
         << " by pressing A, B, or C:\n\n";
    cout << "\tPackage A: $9.95 a month; 10hrs free access; Additional hrs: $2.00/hr.\n";
    cout << "\tPackage B: $14.95 a month; 20hrs free access; Additional hrs: $1.00/hr.\n";
    cout << "\tPackage C: $19.95 a month; Unlimited access.\n";
    cin >> choice;
    cout << "How many hours did you use?\n";
    cin >> hrs;

    if (hrs >= 0 && hrs <= MAX_HRS)
    {
        if (choice == 'A' || choice == 'a')
        {
            if (hrs <= BASE_HRS_A)
                total = BASE_RATE_A;
            else
                total = BASE_RATE_A + ADD_HRLY_A * (hrs - BASE_HRS_A);
        }
        else if (choice == 'B' || choice == 'b')
        {
            if (hrs <= BASE_HRS_B)
                total = BASE_RATE_B;
            else
                total = BASE_RATE_B + ADD_HRLY_B * (hrs - BASE_HRS_B);
        }
        else if (choice == 'C' || choice == 'c')
                total = RATE_C;
        else
        {
            cout << "Please enter one of the following for your choice of service plan:\n"
                 << "'A', 'a', 'B', 'b', 'C', or 'c'\n";
            error = true;
        }
    }
    else
    {
        cout << "Please enter a number of hours between 0 and "
             << MAX_HRS << ".\n";
        error = true;
    }

    if (!error)
    {
        cout << setprecision(2) << fixed << showpoint;
        cout << "Your total monthly bill is $" << total << ".\n";
    }
    return 0;
}



