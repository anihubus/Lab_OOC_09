#include<iostream>
using namespace std;
namespace sujal {
    int add()
     {
        int a,b,sum;
        cout<<"Enter first number : ";
        cin>>a;
        cout<<"Enter second number : ";
        cin>>b;
        sum=a+b;
        return sum;
    }

    int sub() 
    {
        int x,y,sub;
        cout<<"Enter first number : ";
        cin>>x;
        cout<<"Enter second number : ";
        cin>>y;
        sub=x-y;
        return sub;
    }

}