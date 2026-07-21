#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a is : "<<a<<endl;
    cout<<"b is : "<<b<<endl;
    return 0;
} 