#include <iostream>
using namespace std;
int main() {
    int n,f=1,i;
    cout<<"Enter a number: ";
    cin>>n;
    i=n;
    while(i>0) {
        f=f*i;
        i--;
    }
    cout<<"Factorial of "<<n<<" is : "<<f<<endl;
    return 0;
}