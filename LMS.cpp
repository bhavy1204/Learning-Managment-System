#include <iostream>
#include <string>
#define MAX 5
using namespace std;

int i;
//courses
class courses{
    public:
    int id;
    string name;
    int max_marks;
    int duration;
    void add_course(){
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"Enter Course Name : ";
        getline(cin,name);
        cout<<"Enter course id : ";
        cin>>id;
        cout<<"Enter maximum marks : ";
        cin>>max_marks;
        cout<<"Enter Course duration(Hrs) : ";
        cin>>duration;
        cout<<"--------------------------------------------------------------"<<endl;
    }
    void course_detail(){
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"Name : "<<name;
        cout<<"id : "<<id;
        cout<<"maximim marks : "<<max_marks;
        cout<<"Durationn(Hrs): "<<duration;  
        cout<<"------------------------------------------------------------"<<endl;  
    }
};
//class student
class Student
{
    int contactNo;
    string address;
    string Mother_name;
    string Father_name;
public:
    string Stu_name;
    int rollno;
    void Student_Detail(){
        string Stu_name,Mother_name, father_name, address;
        int rollno, contactNo;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"Enter student Name : ";
        getline(cin,Stu_name);
        cout<<"Enter Student Roll no : ";
        cin>>rollno;
        cout<<"Enter student contact : ";
        cin>>contactNo;
        cout<<"Enter Fathers name : ";
        getline(cin,Father_name);
        cout<<"Enter Mothers name : ";
        getline(cin,Mother_name);
        cout<<"Enter Address : ";
        getline(cin,address);
        cout<<"-------------------------------------------------------------"<<endl;
    }
    void show_student_detail(){
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"Name : "<<Stu_name;
        cout<<"Name : "<<rollno;
        cout<<"Conatct : "<<contactNo;
        cout<<"Mother Name : "<<Mother_name;
        cout<<"Father Name : "<<Father_name;
        cout<<"Address : "<<address;
        cout<<"--------------------------------------------------------------"<<endl;
    }
};
//Class Teacher
class Teacher
{
    int id;
    int contactNo;
    string address;
    string Mother_name;
    string Father_name;
public:
    string Teach_name;
    void Student_Detail(){
        string Teach_name,Mother_name, father_name, address;
        int rollno, contactNo;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"Enter Teacher Name : ";
        getline(cin,Teach_name);
        cout<<"Enter ID : ";
        cin>>id;
        cout<<"Enter teacher contact : ";
        cin>>contactNo;
        cout<<"Enter Fathers name : ";
        getline(cin,Father_name);
        cout<<"Enter Mothers name : ";
        getline(cin,Mother_name);
        cout<<"Enter Address : ";
        getline(cin,address);
        cout<<"-------------------------------------------------------------"<<endl;
    }
    void show_teacher_detail(){
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"Name : "<<Teach_name;
        cout<<"Name : "<<id;
        cout<<"Conatct : "<<contactNo;
        cout<<"Mother Name : "<<Mother_name;
        cout<<"Father Name : "<<Father_name;
        cout<<"Address : "<<address;
        cout<<"--------------------------------------------------------------"<<endl;
    }
};
int main()
{
    system("cls");
    bool done=false;
    int top=-1;
    Student s[MAX];
    Teacher t1;
    int choice;
    
    do{
        cout<<"1. students "<<endl;
        cout<<"2. teachers "<<endl;
        cout<<"3. courses "<<endl;
        cout<<"4. Quit\n>>>";
        cin>>choice;
        switch (choice)
        {
        case 1:
            /* students menu */
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
    } while (choice!=4);
    
    return 0;
}