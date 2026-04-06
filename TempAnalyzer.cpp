// Opens the file 'temperatures.txt' and calculates the average temperature
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    int count = 0;
    double temp, avg, accum = 0;
    ifstream inFile;

    inFile.open("temperatures.txt");

    while (inFile >> temp)
    {
        count++;
        accum += temp;
    }

    avg = accum / count;

    cout << setprecision(1) << fixed << showpoint;
    cout << "The average temperature over the "
         << count << " day period was: " << avg << endl;

    inFile.close();
    return 0;
}
