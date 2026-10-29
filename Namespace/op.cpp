#include<iostream>
using namespace std;
namespace sujal
{int add();int sub();int mult();int div();}
int main() {
    int ch;
    cout<<"1. Sum\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"Enter your choice (1-4) : \n";
    cin>>ch;
    switch (ch) {
        case 1:
            cout<<sujal::add()<<endl;
            break;
        case 2:
            cout<<sujal::sub()<<endl;
            break;
        case 3:
            cout<<sujal::mult()<<endl;
            break;
        case 4:
            cout<<sujal::div()<<endl;
            break;
    }
    return 0;
}