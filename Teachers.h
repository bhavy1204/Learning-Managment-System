#ifndef Teacher_H
#define Teacher_H

#include <iostream>
#include <limits>
#include <string>
#include "Utility.h"
#define MAX 5
using namespace std;
// Class Teacher
class Teacher
{
    long long int contactNo;
    string address;
    string Mother_name;
    string Father_name;

public:
    int id;
    string Teach_name;
    void teacher_Detail()
    {
        cin.ignore();
        cout << "------------------------------------------------------" << endl;
        cout << "Enter Teacher Name : ";
        getline(cin, Teach_name);
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter teacher contact : ";
        cin >> contactNo;
        validUserInput();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Fathers name : ";
        getline(cin, Father_name);
        cout << "Enter Mothers name : ";
        getline(cin, Mother_name);
        cout << "Enter Address : ";
        getline(cin, address);
        cout << "------------------------------------------------------" << endl;
    }
    void show_teacher_detail()
    {
        cout << "----------------------------------------------------------" << endl;
        cout << "\nName : " << Teach_name;
        cout << "\nName : " << id;
        cout << "\nConatct : " << contactNo;
        cout << "\nMother Name : " << Mother_name;
        cout << "\nFather Name : " << Father_name;
        cout << "\nAddress : " << address;
        cout << "\n----------------------------------------------------------" << endl;
    }
};

#endif 
