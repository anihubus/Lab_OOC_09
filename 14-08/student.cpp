#include <iostream>
#include <string>
using namespace std;

class Student
{
    //data function 
private:
    string name;
    int rollno;
    float marks1,marks2,marks3,marks4,marks5,percentage;

// member function
public:
    void inputDetails()
    {
        cout<<"Enter Student Name: ";
        getline(cin>>ws, name);

        cout<<"Enter Roll Number: ";
        cin>>rollno;

        cout<<"Enter Marks for DMS: ";
        cin>>marks1;
        cout<<"Enter Marks for OEC: ";
        cin>>marks2;
        cout<<"Enter Marks for CN: ";
        cin>>marks3;
        cout<<"Enter Marks for IPR: ";
        cin>>marks4;
        cout<<"Enter Marks for MDM: ";
        cin>>marks5;
        percentage=((marks1+marks2+marks3+marks4+marks5)/500)*100;


    }

    void displayDetails() const
    {
        cout<<"\n----- Student Marksheet -----\n";
        cout<<"Name\t\t     Roll No.  DMS\tOEC\tCN\tIPR\tMDM\tPercentage"<<endl;
        cout<<name<<"\t"<<rollno<<"\t"<<marks1<<"\t"<<marks2<<"\t"<<marks3<<"\t"<<marks4<<"\t"<<marks5<<"\t"<<percentage<<endl;
    }
};

int main()
{
    Student s;

    s.inputDetails();
    s.displayDetails();
    return 0;
}