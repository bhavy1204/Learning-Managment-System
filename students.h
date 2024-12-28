#include <iostream>
#include <limits>
#include <string>
#define MAX 5
using namespace std;
// class student
class Student
{
    long long int contactNo;
    string address;
    string Mother_name;
    string Father_name;

public:
    string Stu_name;
    int rollno;
    // TO get student details and update them
    void Student_Detail()
    {
        cout << "---------------------------------------------------" << endl;
        cout << "Enter student Name : ";
        // to clear input buffer
        //  cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, Stu_name);
        cout << "Enter Student Roll no : ";
        cin >> rollno;
        cout << "Enter student contact : ";
        cin >> contactNo;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Fathers name : ";
        getline(cin, Father_name);
        cout << "Enter Mothers name : ";
        getline(cin, Mother_name);
        cout << "Enter Address : ";
        getline(cin, address);
        cout << "---------------------------------------------------" << endl;
    }
    // To View student detail
    void show_student_detail()
    {
        cout << "---------------------------------------------------------" << endl;
        cout << "\nName : " << Stu_name;
        cout << "\nName : " << rollno;
        cout << "\nConatct : " << contactNo;
        cout << "\nFather Name : " << Father_name;
        cout << "\nMother Name : " << Mother_name;
        cout << "\nAddress : " << address;
        cout << "\n--------------------------------------------------------" << endl;
    }
};