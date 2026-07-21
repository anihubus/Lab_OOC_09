#include <iostream>
using namespace std;
int main() {
    int length,breadth;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>breadth;
    cout<<"Area: "<<(length*breadth)<< endl;
    cout<<"Perimeter: "<<(2*(length+breadth))<<endl;
    return 0;
} 