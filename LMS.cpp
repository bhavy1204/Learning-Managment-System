#include <iostream>
#include <string>
#define MAX 5
using namespace std;

int i;
// courses
class courses
{
public:
    int id;
    string name;
    int max_marks;
    int duration;
    void add_course()
    {
        cout << "--------------------------------------------------------------" << endl;
        cout << "Enter Course Name : ";
        getline(cin, name);
        cout << "Enter course id : ";
        cin >> id;
        cout << "Enter maximum marks : ";
        cin >> max_marks;
        cout << "Enter Course duration(Hrs) : ";
        cin >> duration;
        cout << "--------------------------------------------------------------" << endl;
    }
    void course_detail()
    {
        cout << "------------------------------------------------------------" << endl;
        cout << "Name : " << name;
        cout << "id : " << id;
        cout << "maximim marks : " << max_marks;
        cout << "Durationn(Hrs): " << duration;
        cout << "------------------------------------------------------------" << endl;
    }
};
// class student
class Student
{
    int contactNo;
    string address;
    string Mother_name;
    string Father_name;

public:
    string Stu_name;
    int rollno;
    void Student_Detail()
    {
        string Stu_name, Mother_name, father_name, address;
        int rollno, contactNo;
        cout << "-------------------------------------------------------------" << endl;
        cin.ignore();
        cout << "Enter student Name : ";
        getline(cin, Stu_name);
        cin.ignore();
        cout << "Enter Student Roll no : ";
        cin >> rollno;
        cin.ignore();
        cout << "Enter student contact : ";
        cin >> contactNo;
        cin.ignore();
        cout << "Enter Fathers name : ";
        cin.ignore();
        getline(cin, Father_name);
        cout << "Enter Mothers name : ";
        cin.ignore();
        getline(cin, Mother_name);
        cout << "Enter Address : ";
        cin.ignore();
        getline(cin, address);
        cout << "-------------------------------------------------------------" << endl;
    }
    void show_student_detail()
    {
        cout << "--------------------------------------------------------------" << endl;
        cout << "Name : " << Stu_name;
        cout << "Name : " << rollno;
        cout << "Conatct : " << contactNo;
        cout << "Mother Name : " << Mother_name;
        cout << "Father Name : " << Father_name;
        cout << "Address : " << address;
        cout << "--------------------------------------------------------------" << endl;
    }
};
// Class Teacher
class Teacher
{
    int id;
    int contactNo;
    string address;
    string Mother_name;
    string Father_name;

public:
    string Teach_name;
    void teacher_Detail()
    {
        string Teach_name, Mother_name, father_name, address;
        int rollno, contactNo;
        cout << "-------------------------------------------------------------" << endl;
        cout << "Enter Teacher Name : ";
        getline(cin, Teach_name);
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter teacher contact : ";
        cin >> contactNo;
        cout << "Enter Fathers name : ";
        getline(cin, Father_name);
        cout << "Enter Mothers name : ";
        getline(cin, Mother_name);
        cout << "Enter Address : ";
        getline(cin, address);
        cout << "-------------------------------------------------------------" << endl;
    }
    void show_teacher_detail()
    {
        cout << "--------------------------------------------------------------" << endl;
        cout << "Name : " << Teach_name;
        cout << "Name : " << id;
        cout << "Conatct : " << contactNo;
        cout << "Mother Name : " << Mother_name;
        cout << "Father Name : " << Father_name;
        cout << "Address : " << address;
        cout << "--------------------------------------------------------------" << endl;
    }
};
int main()
{
    system("cls");
    bool done = false;
    int top = -1;
    Student s[MAX];
    Teacher t1;
    int choice;

    do
    {
        cout << "------------------------------------------------------" << endl;
        cout << "1. students " << endl;
        cout << "2. teachers " << endl;
        cout << "3. courses " << endl;
        cout << "4. Quit\n>> ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            int sub_choice;
            do
            {
                cout << "----------------------------------------------------" << endl;
                cout << "1.View student detail " << endl;
                cout << "2.View all student details " << endl;
                cout << "3.Add student(s)" << endl;
                cout << "4.Update student detail " << endl;
                cout << "5. Go back \n>> ";
                cin >> sub_choice;
                cin.ignore();
                cout << "----------------------------------------------------" << endl;
                switch (sub_choice)
                {
                case 1:{
                    int rn;
                    cout << "Enter roll no :- ";
                    cin >> rn;
                    bool found=false;
                    for (i = 0; i < MAX; i++)
                    {
                        if (s[i].rollno == rn){
                            s[i].show_student_detail();
                            found=true;
                        }
                    }
                    if(found==false){
                        cout << "NOT FOUND IN RECORD" << endl;
                    }
                    break;
                }
                case 3:
                cin.ignore();
                    if (top + 1 < MAX)
                    {
                        s[++top].Student_Detail();
                    }
                    else
                    {
                        cout << "Student capacity reached! Cannot add more students." << endl;
                    }
                    break;

                default:
                    break;
                }
            } while (sub_choice != 5);
            break;
        case 2:
            /* teachers menu */
            break;
        case 3:
            /* courses menu */
            break;
        default:
            break;
        }
    } while (choice != 4);

    return 0;
}