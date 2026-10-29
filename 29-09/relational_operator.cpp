#include <iostream> 
using namespace std; 
class MyClass { 
    private: 
        int value; // Private member to store the value 
    public: 
        MyClass(int val) : value(val) {}    // Constructor to initialize MyClass objects 

    // Overloading the equality operator (==) 
    bool operator==(const MyClass& other) const { 
        return value == other.value;                    // Compare the value of this object with the value of 'other' 
    } 

    // Overloading the inequality operator (!=) 
    bool operator!=(const MyClass& other) const { 
        return !(*this == other);                       // Utilize the already overloaded '==' operator     
    } 

    // Overloading the less than operator (<) 
    bool operator<(const MyClass& other) const { 
        return value < other.value;                     // Compare the value of this object with 'other' for less than  
    } 

    // Overloading the greater than operator (>) 
    bool operator>(const MyClass& other) const { 
        return value > other.value;                      // Compare the value of this object with 'other' for greater than 
    }

    // Overloading the less than or equal to operator (<=) 
    bool operator<=(const MyClass& other) const { 
        return !(*this > other);                         // Utilize the already overloaded '>' operator 
    }

    // Overloading the greater than or equal to operator(>=) 
    bool operator>=(const MyClass& other) const { 
        return !(*this < other);                         // Utilize the already overloaded '<' operator 
    } 
}; 
int main() { 
    MyClass obj1(20); 
    MyClass obj2(20); 
    
    // Using overloaded relational operators 
    if (obj1 == obj2) { 
        cout<<"obj1 is equal to obj2"<<endl; 
    } else { 
        cout<<"obj1 is not equal to obj2"<<endl; 
    } 
    if (obj1 < obj2) { 
        cout<<"obj1 is less than obj2"<<endl; 
    } else { 
        cout<<"obj1 is not less than obj2"<<endl; 
    } 

    // Using overloaded '!=' operator 
    if (obj1 != obj2) { 
        cout<<"obj1 is not equal to obj2"<<endl; 
    } 
    else { 
    cout<<"obj1 is equal to obj2"<<endl; 
    } 
    // Using overloaded '>' operator 
    if (obj1 > obj2) { 
    cout<<"obj1 is greater than obj2"<<endl; 
    } 
    else { 
    cout<<"obj1 is not greater than obj2"<<endl; 
    } 
    // Using overloaded '<=' operator 
    if (obj1 <= obj2) { 
        cout<<"obj1 is less than or equal to obj2"<<endl; 
    } else { 
        cout<<"obj1 is not less than or equal to obj2"<<endl; 
    } 
    // Using overloaded '>=' operator 
    if (obj1 >= obj2) { 
        cout<<"obj1 is greater than or equal to obj2"<<endl; 
    } else { 
        cout<<"obj1 is not greater than or equal to obj2"<<endl; 
    } 
    return 0; 
} 