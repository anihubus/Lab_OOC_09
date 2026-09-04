#include <iostream>
using namespace std;

class Employee {
    public:
    float calculateSalary(float basic) {
        return basic;
    }

    float calculateSalary(float basic, float hra) {
        return basic+hra;
    }

    float calculateSalary(float basic, float hra, float da) {
        return basic+hra+da;
    }
};

int main() {
    Employee emp;
    cout<<"Salary using Basic Salary only: "<<emp.calculateSalary(20000)<<endl;
    cout<<"Salary using Basic Salary and HRA: "<<emp.calculateSalary(20000, 5000)<<endl;
    cout<<"Salary using Basic Salary, HRA and DA: "<<emp.calculateSalary(20000, 5000, 3000)<<endl;
    return 0;
}