#include <iostream>
#include <limits>
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
        cout << "-------------------------------------------------------" << endl;
        cout << "Enter Course Name : ";
        getline(cin, name);
        cout << "Enter course id : ";
        cin >> id;
        cout << "Enter maximum marks : ";
        cin >> max_marks;
        cout << "Enter Course duration(Hrs) : ";
        cin >> duration;
        cout << "---------------------------------------------------------" << endl;
    }
    void course_detail()
    {
        cout << "-------------------------------------------------------" << endl;
        cout << "Name : " << name;
        cout << "id : " << id;
        cout << "maximim marks : " << max_marks;
        cout << "Durationn(Hrs): " << duration;
        cout << "-------------------------------------------------------" << endl;
    }
};
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
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
    // to show student detail
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
int main()
{
    system("cls");
    bool done = false;
    int studentTop = -1, teacherTop = -1;
    Student s[MAX];
    Teacher t1[MAX];
    int choice;

    do
    {
        // Main menu
        cout << "------------------------------------------------------" << endl;
        cout << "1. students " << endl;
        cout << "2. teachers " << endl;
        cout << "3. courses " << endl;
        cout << "4. Quit\n>> ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            // Menu for operation on students
            int sub_choice;
            do
            {
                cout << "---------------------------------------------" << endl;
                cout << "1.View student detail " << endl;
                cout << "2.View all student details " << endl;
                cout << "3.Add student(s)" << endl;
                cout << "4.Update student detail " << endl;
                cout << "5.View result " << endl;
                cout << "6.View results of all " << endl;
                cout << "7. Go back \n>> ";
                cin >> sub_choice;
                cout << "--------------------------------------------" << endl;
                switch (sub_choice)
                {
                case 1:
                    int rn;
                    cout << "Enter roll no :- ";
                    cin >> rn;
                    bool found = false;
                    for (i = 0; i < MAX; i++)
                    {
                        if (s[i].rollno == rn)
                        {
                            s[i].show_student_detail();
                            found = true;
                        }
                    }
                    if (found == false)
                        cout << "NOT FOUND IN RECORD" << endl;
                    break;
                case 2:
                    for (i = 0; i <= studentTop; i++)
                        s->show_student_detail();
                    break;
                case 3:
                    cin.ignore();
                    if (studentTop + 1 < MAX)
                        s[++studentTop].Student_Detail();
                    else
                        cout << "Batch capacity reached! Cannot add more students." << endl;
                    break;
                case 4:
                {
                    int rn;
                    cout << "Enter roll no :- ";
                    cin >> rn;
                    bool found = false;
                    cin.ignore();
                    for (i = 0; i <= studentTop; i++)
                    {
                        if (s[i].rollno == rn)
                        {
                            s[i].Student_Detail();
                            cout << " Updated succesfully " << endl;
                            found = true;
                        }
                    }
                    if (found == false)
                        cout << "NOT FOUND IN RECORD" << endl;
                    break;
                }
                case 5:
                    int rn;
                    cout << "Enter roll no :- ";
                    cin >> rn;
                    bool found = false;
                    for (i = 0; i < MAX; i++)
                    {
                        if (s[i].rollno == rn)
                        {
                            s[i].show_student_detail();
                            found = true;
                        }
                    }
                    if (found == false)
                        cout << "NOT FOUND IN RECORD" << endl;
                    break;
                case 6:
                    cout << "View result of all" <<endl;
                    break;
                default:
                    break;
                }
            } while (sub_choice != 7);
            break;

        case 2:
            do
            {
                // Menu for operation on teachers
                cout << "--------------------------------------------------" << endl;
                cout << "1.Search teacher " << endl;
                cout << "2.View all teachers details " << endl;
                cout << "3.Add new teacher" << endl;
                cout << "4.Update teacher details " << endl;
                cout << "5. Go back \n>> ";
                cin >> sub_choice;
                cout << "--------------------------------------------------" << endl;
                switch (sub_choice)
                {
                case 1:
                {
                    if (teacherTop == -1)
                        cout << "NO teacher to show " << endl;
                    int id;
                    cout << "Enter teacher id : ";
                    cin >> id;
                    for (i = 0; i <= teacherTop; i++)
                    {
                        if (id == t1[i].id)
                            t1[i].show_teacher_detail();
                    }
                    break;
                }
                case 2:
                    if (teacherTop == -1)
                        cout << "No teacher to show " << endl;
                    else
                        for (i = 0; i <= teacherTop; i++)
                            t1[i].show_teacher_detail();
                    break;
                case 3:
                    if (teacherTop == MAX - 1)
                        cout << "Memory full" << endl;
                    else
                        t1[++teacherTop].teacher_Detail();
                    break;
                default:
                    break;
                }
            } while (sub_choice != 5);
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