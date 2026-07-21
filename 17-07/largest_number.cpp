#include <iostream>
using namespace std;
int main() {
    int n,l=0,m;
    cout << "Enter a number: ";
    cin >> n;
    if (n<0) {
        n=-n;
    }   
    while (n>0) {
        m=n%10;
        if (m>l) {
            l=m;
        }
        n/=10;
    }
    cout<<"The largest digit is: "<<l<<endl;
    return 0;
}