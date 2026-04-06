// Asks the user to input positive integers and returns their sum.
// A negative number is used as a sentinel value for when the user wants to quit.
#include <iostream>
using namespace std;

int main()
{
    int num = 0, total = 0;

    while (num >= 0)
    {
        total += num;
        cout << "Enter a positive integer to add to the sum,"
             << " or a negative number to quit: ";
        cin >> num;
    }

    cout << "The final sum: " << total << endl;
    
    return 0;
}