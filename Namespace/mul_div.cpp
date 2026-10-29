#include<iostream>
using namespace std;
namespace sujal {
    int mult() {
        int a,b,mult;
        cout<<"Enter first number : ";
        cin>>a;
        cout<<"Enter second number : ";
        cin>>b;
        mult=a*b;
        return mult;
    }

    int div()
     {
        int x,y,div;
        cout<<"Enter first number : ";
        cin>>x;
        cout<<"Enter second number : ";
        cin>>y;
        if (y == 0) {
                cout<<"Zero division is not allowed."<<endl;
        } else {
            div=x/y;
        }
        return div;
    }
}