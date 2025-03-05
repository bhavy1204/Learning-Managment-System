#ifndef Utility
#define Utility

#include <iostream>
#include <limits>
#include <string>



using namespace std;

//To ensure that user only input vakud integer data and program does not terminate at input of any other format

bool validUserInput()
{
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter valid input \n";
        }
        else
        {
            break;
            return true;
        }
    }
}
#endif