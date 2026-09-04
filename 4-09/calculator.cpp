#include <iostream>
using namespace std;

class Calculator {
    public:
    int add(int a,int b) {
        return a+b;
    }

    int add(int a,int b,int c) {
        return a+b+c;
    }

    float add(float a,float b) {
        return a+b;
    }
};

int main() {
    Calculator calc;
    cout<<"Sum of two integers: "<<calc.add(9,25)<<endl;
    cout<<"Sum of three integers: "<<calc.add(13,24,50)<<endl;
    cout<<"Sum of two floating-point numbers: "<<calc.add(11.5f, 25.8f)<<endl;
    return 0;
}