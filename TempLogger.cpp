// Asks the user how many days of temperatures they would like to input
// then writes them to the file 'temperatures.txt'.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int days;
    double temp;
    ofstream outFile;
    
    outFile.open("temperatures.txt");
    
    cout << "How many days of temperatures would you like to record? ";
    cin >> days;

    for (int count = 0; count < days; count++)
    {
        cout << "Enter the temperature on day "
             << count + 1 << ": ";
        cin >> temp;
        outFile << temp << endl;
    }

    outFile.close();
    return 0;
}