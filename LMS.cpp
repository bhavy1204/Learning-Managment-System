#include <iostream>
#include <limits>
#include <string>
#include "students.h"
#include "Teachers.h"
#include "Utility.h"
#define MAX 5
using namespace std;

int i;
// courses class
class courses
{
public:
    int id;
    string name;
    int max_marks;
    int duration;
    // Adding new courses and update them
    void add_course()
    {
        cout << "-------------------------------------------------------" << endl;
        cout << "Enter Course Name : ";
        getline(cin, name);
        cout << "Enter course id : ";
        cin >> id;
        cout << "Enter maximum marks : ";
        cin >> max_marks;
        validUserInput();
        cout << "Enter Course duration(Hrs) : ";
        cin >> duration;
        validUserInput();
        cout << "---------------------------------------------------------" << endl;
    }
    // View course details
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


int main()
{
    system("cls");
    bool done = false;
    bool found = false;
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
        validUserInput();
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
                    found = false;
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
                    found = false;
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
                    // int rn;
                    cout << "Enter roll no :- ";
                    cin >> rn;
                    found = false;
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
                    cout << "View result of all" << endl;
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