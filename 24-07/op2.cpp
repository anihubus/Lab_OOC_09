#include<iostream>
using namespace std;
namespace sujal
{int add();int sub();int mult();int div();}
int main() {
    int ch;
    char i;
    do {
        cout << "1. Sum\n";
        cout << "2. Difference\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout<<sujal::add();
                break;
            case 2:
                cout<<sujal::sub();
                break;
            case 3:
                cout<<sujal::mult();
                break;
            case 4:
                cout<<sujal::div();
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
        cout<<"\nDo you want to perform another operation? (y/n): ";
        cin>>i;
    } while (i == 'y' || i == 'Y');
    return 0;
}