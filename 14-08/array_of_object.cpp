#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {
        name="Unknown";
        age=0;
    }
};

int main() {
    int n,j=1;
    cout<<"Enter the number of students: ";
    cin>>n;
    cin.ignore();
    Student students[n];
    while (j<=n) {
        cout<<"Enter the name of the student "<<j<<": "<<endl;
        getline(cin,students[j-1].name);
        cout<<"Enter the age of the student "<<j<<": "<<endl;
        cin>>students[j-1].age;
        cin.ignore();
        j++;
    }
    for (int i=0;i<n;i++) {
        cout<<students[i].name<<" - "<<students[i].age<<endl;
    }
    return 0;
}