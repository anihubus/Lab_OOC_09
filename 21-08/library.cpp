#include <iostream>
using namespace std;

class LibraryBook {
private:
    string Book_Title;
    string Author_Name;
    int Book_Number;
    bool Is_Issued;

public:
    LibraryBook(string title, string author, int number) {
        Book_Title=title;
        Author_Name=author;
        Book_Number=number;
        Is_Issued=false;
    }

    void issueBook() {
        if (!Is_Issued) {
            Is_Issued=true;
            cout<<"Book Issued: "<<Book_Title<<endl;
        } else {
            cout<<"Book is already issued!"<<endl;
        }
    }

    void returnBook() {
        if (Is_Issued) {
            Is_Issued=false;
            cout<<"Book Returned: "<<Book_Title<<endl;
        } else {
            cout<<"Book is already available!"<<endl;
        }
    }

    void display() {
        cout<<"\n[Library Book]"<<endl;
        cout<<"Book Title: "<<Book_Title<<endl;
        cout<<"Author: "<<Author_Name<<endl;
        cout<<"Book Number: "<<Book_Number<<endl;

        if (Is_Issued) {
            cout<<"Status: Issued"<<endl;
        } else {
            cout<<"Status: Available"<<endl;
        }
    }
};

int main() {
    LibraryBook book("The Alchemist", "Paulo Coelho", 101);

    book.display();

    book.issueBook();
    book.display();

    book.returnBook();
    book.display();

    return 0;
}