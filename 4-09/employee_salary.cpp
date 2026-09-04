// Employee salary class using function overloading

#include <iostream>
using namespace std;

class Employee {
    public:
    float calculateSalary(float sal) {
        return sal;
    }

    float calculateSalary(float sal, float hra) {
        return sal+hra;
    }

    float calculateSalary(float sal, float hra, float da) {
        return sal+hra+da;
    }
};

int main() {
    Employee emp;
    cout<<"Salary using Salary only: "<<emp.calculateSalary(20000)<<endl;
    cout<<"Salary using Salary and HRA: "<<emp.calculateSalary(20000, 5000)<<endl;
    cout<<"Salary using Salary, HRA and DA: "<<emp.calculateSalary(20000, 5000, 3000)<<endl;
    return 0;
}