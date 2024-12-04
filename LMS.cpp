#include <iostream>
#include <string>
using namespace std;
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
        cout<<"Name : "<<Stu_name;
        cout<<"Name : "<<rollno;
        cout<<"Conatct : "<<contactNo;
        cout<<"Mother Name : "<<Mother_name;
        cout<<"Father Name : "<<Father_name;
        cout<<"Address : "<<address;
    }
};
int main()
{
    system("cls");
    Student s1;
    s1.Student_Detail();
    s1.show_student_detail();
    return 0;
}